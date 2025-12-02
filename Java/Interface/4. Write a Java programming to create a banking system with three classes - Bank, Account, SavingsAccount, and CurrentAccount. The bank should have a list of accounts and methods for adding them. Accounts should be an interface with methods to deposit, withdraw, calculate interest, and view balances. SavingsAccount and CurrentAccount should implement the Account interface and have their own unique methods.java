import java.util.ArrayList;
import java.util.List;
interface Account
{
    void deposit(double amount);
    void withdraw(double amount);
    double getBalance();
}
class SavingsAccount implements Account
{
    private double balance;
    private double interestrate;
    public SavingsAccount(double initialDeposit, double interestrate)
    {
        this.balance = initialDeposit;
        this.interestrate = interestrate;
    }
    @Override
    public void deposit(double amount)
    {
        balance+=amount;
    }
    @Override
    public void withdraw(double amount)
    {
        balance-=amount;
    }
    @Override
    public double getBalance()
    {
        return balance;
    }
    public void applyInterest()
    {
     balance+= balance*interestrate/100;   
    }
}
class CurrentAccount implements Account
{
    private double balance;
    private double overdraftlimit;
    public CurrentAccount(double initialDeposit, double overdraftlimit)
    {
        this.balance = initialDeposit;
        this.overdraftlimit = overdraftlimit;
    }
    @Override
    public void deposit(double amount)
    {
        balance+=amount;
    }
    @Override
    public void withdraw(double amount)
    {
        if(balance + overdraftlimit >= amount)
        {
            balance-=amount;
        }
    }
    @Override
    public double getBalance()
    {
        return balance;
    }
    public void setOverdraftLimit(double overdraftlimit)
    {
        this.overdraftlimit = overdraftlimit;
    }
}
class Bank
{
    private List<Account> accounts;   // ✅ FIX HERE

    public Bank()
    {
        accounts = new ArrayList<>();
    }

    public void addAccount(Account account)
    {
        accounts.add(account);
    }

    public void removeAccount(Account account)
    {
        accounts.remove(account);
    }

    public void deposit(Account account, double amount)
    {
        account.deposit(amount);
    }

    public void withdraw(Account account, double amount)
    {
        account.withdraw(amount);
    }

    public void printAccountBalances()
    {
        for(Account account : accounts)   // ✅ Now this works
        {
            System.out.println("Account balance: " + account.getBalance());
        }
    }
}

public class Main
    {
        public static void main (String[] args)
        { 
          Bank bank = new Bank();
          SavingsAccount savingsAccount = new SavingsAccount(1000,1.24);
          CurrentAccount currentAccount = new CurrentAccount(5000,100);
          bank.addAccount(savingsAccount);
          bank.addAccount(currentAccount);
          
          bank.deposit(savingsAccount,100);
          bank.deposit(currentAccount,500);
          bank.withdraw(savingsAccount, 150.0);
          bank.printAccountBalances();
          
          savingsAccount.applyInterest();
          System.out.println("\nAfter applying interest on Savings A/c for 1 year:");
		  System.out.println("Savings A/c and Current A/c.:");
		  
		   bank.printAccountBalances();
        }
}
