class ThreadTest1{
	
	public static void main(String[] args){
		Runnable r = new Runnable(){
			public void run(){
				for(int i = 1; i <= 3000; i++){
					System.out.println("Hello : " + i);
				}
					
			}
		};
		Thread t = new Thread(r);
		t.start();
		Thread tt = new Thread(r);
		tt.start();
		for(int i = 1; i <= 2000; i++){
			System.out.println("Welcome : " + i);
		}
		
	}
}
