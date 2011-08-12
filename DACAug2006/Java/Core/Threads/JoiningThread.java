class JoiningThread{
	
	public static void main(String[] args){
		Runnable r = new Runnable(){
			public void run(){
				for(int i = 1; i <= 5000; i++){
					System.out.println("Hello : " + i);
				}
			}
		};
		Thread t = new Thread(r);
		t.start();
		for(int i = 1; i <= 3000; i++){
			System.out.println("Welcome : " + i);
		}
		try{
			t.join();
		}catch(InterruptedException e){}
		System.out.println("****************** G O O D B Y E ******************");
	}
}





