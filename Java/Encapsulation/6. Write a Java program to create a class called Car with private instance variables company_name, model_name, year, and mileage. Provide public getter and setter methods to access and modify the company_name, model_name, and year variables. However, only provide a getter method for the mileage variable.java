//Car.java
class Car
{
    private String company_name;
    private String model_name;
    private int year;
    private double mileage;
    public String getCompany_name()
    {
        return company_name;
    }
    public void setCompany_name(String company_name)
    {
        this.company_name = company_name;
    }
    public String getModel_name()
    {
        return model_name;
    }
    public void setModel_name(String model_name)
    {
        this.model_name = model_name;
    }
    public int getYear()
    {
        return year;
    }
    public void setYear(int year)
    {
        this.year=year;
    }
    public double getMileage()
    {
        return mileage;
    }
    public void setMileage(double mileage)
    {
        this.mileage = mileage;
    }
}

class Main {
    public static void main(String[] args) {
    Car car = new Car();
    car.setCompany_name("BMW");
    car.setModel_name("OBC");
    car.setYear(2005);
    car.setMileage(2900.55);
    
     String company_name = car.getCompany_name();
     String model_name = car.getModel_name();
     int year = car.getYear();
     double mileage = car.getMileage();
     
      System.out.println("Company Name: " + company_name);
      System.out.println("Model Name: " + model_name);
      System.out.println("Year: " + year);
      System.out.println("Mileage: " + mileage);
    }
}
