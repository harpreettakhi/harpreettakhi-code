class WaitingThread{
	
	public static void main(String[] args){
		final Object lock = new Object();
		Runnable r = new Runnable(){
			public void run(){
				for(int i = 1; i <= 3000; i++){
					System.out.println("Hello : " + i);
				}
				try{
					synchronized(lock){
						lock.wait();
					}
				}catch(InterruptedException e){}
				System.out.println("****************** G O O D B Y E ******************");	
			}
		};
		Thread t = new Thread(r);
		t.start();
		for(int i = 1; i <= 5000; i++){
			System.out.println("Welcome : " + i);
		}
		synchronized(lock){
			lock.notify();
		}
	}
}






