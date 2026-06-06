interface LibraryUser
{
    void registerAccount();
    void requestBook();
}
class KidUsers implements LibraryUser
{
    int age;
    String bookType;

    void registerAccount(int age)
    {
        if(age>12)
          System.out.println("“You have successfully registered under an Adult Account");
        if(age<12)
          System.out.println("“Sorry, Age must be less than 12 to register as an Adult");
    }

    void requestBook(String book)
    {
        if(book=="Fiction")
          System.out.println("“Book Issued successfully, please return the book 
within 7 days");
        else
         System.out.println("Oops, you are allowed to take only adult Fiction books");
    }
}

class AdultUser implements LibraryUser
{
    int age;
    String bookType;

    void registerAccount(int age)
    {
        if(age>12)
          System.out.println("“You have successfully registered under an Adult Account");
        if(age<12)
          System.out.println("“Sorry, Age must be less than 12 to register as an Adult");
    }

    void requestBook(String book)
    {
        if(book=="Fiction")
          System.out.println("“Book Issued successfully, please return the book 
within 7 days");
        else
         System.out.println("Oops, you are allowed to take only adult Fiction books");
    }
}

class LibraryInterfaceDemo
{
    public static void main(String arg[])
    {
        KidUsers kid1 = new KidUsers();

        kid1.registerAccount(10);
        kid1.requestBook("Kids");

        KidUsers kid2 = new KidUsers();

        kid2.registerAccount(18);
        kid2.requestBook("Fiction"));
    }
}
