interface circle 
{
    //Characteristics
    float pi = 3.14f;  //public static final
}

public class DemoInterface 
{
    public static void main(String A[])
    {
        System.out.println(circle.pi);
        circle.pi = 7.12f;     //Error due to final
    }
}
