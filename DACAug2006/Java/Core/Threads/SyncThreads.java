class JointAccount{
	
	private int balance = 5000;
		
	public synchronized void deposit(int amount){
		balance += amount;
	}

	public void withdraw(int amount, String user){
		System.out.println(user + " is withdrawing " + amount);
		synchronized(this){
			if(balance >= amount){
				try{
					Thread.sleep(amount / 100);
				}catch(InterruptedException e){}
				balance -= amount;
			}else{
				System.out.println(user + " cannot withdraw " + amount);
			}
		}
	}

	public int getBalance(){
		return balance;
	}
}

class SyncThreads{
	
	public static void main(String[] args) throws InterruptedException{
		final JointAccount acc = new JointAccount();
		System.out.println("Original Balance : " + acc.getBalance());
		Runnable r = new Runnable(){
			public void run(){
				acc.withdraw(4000, "Jill");		
			}	
		};
		Thread t = new Thread(r);
		t.start();
		acc.withdraw(3000, "Jack");
		t.join();
		System.out.println("Final Balance : " + acc.getBalance());
	}
}











