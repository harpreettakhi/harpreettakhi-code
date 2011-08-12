import java.net.*;
import java.util.*;
import java.nio.*;
import java.nio.channels.*;
import java.nio.charset.*;

class HttpServerTest{

	private static String[] symbols = {"DELL", "IBM", "MSFT", "ORCL", "SUNW"};
	private static Random rnd = new Random();

	public static void main(String[] args) throws Exception{

		ServerSocketChannel server = ServerSocketChannel.open();
		server.socket().bind(new InetSocketAddress(8055));
		server.configureBlocking(false);
		Selector selector = Selector.open();
		server.register(selector, SelectionKey.OP_ACCEPT);
		
		while(selector.select() > 0){
			Iterator i = selector.selectedKeys().iterator();
			while(i.hasNext()){
				SelectionKey key = (SelectionKey) i.next();
				if(key.isAcceptable()){
					SocketChannel client = server.accept();
					client.configureBlocking(false);
					client.register(selector, SelectionKey.OP_READ);
				}else if(key.isReadable()){
					SocketChannel client = (SocketChannel) key.channel();
					Charset cs = Charset.forName("UTF-8");
					ByteBuffer buffer = ByteBuffer.allocate(1024);
					client.read(buffer);
					buffer.flip();
					String request = cs.decode(buffer).toString();
					String[] lines = request.split("\r\n");
					String symbol = lines[0].substring(5, lines[0].length() - 9);
					String response = null;
					if(Arrays.binarySearch(symbols, symbol) >= 0)
						response = "Price is " + (10 + 90 * rnd.nextDouble());
					else
						response = "No such symbol";
					client.write(cs.encode("HTTP/1.0 200 OK\r\nContent-type: text/plain\r\n\r\n"));
					client.write(cs.encode(response));
					client.close();
				}
				i.remove();
			}
		}
		
	}
}
