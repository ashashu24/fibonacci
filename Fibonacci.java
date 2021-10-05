//To print fibonacci.java
import java.io.*;
class Fibonacci
{
  public static void main(String[] args)
  {
    int first=0,second=1,num=10,third;
    for(int i=0;i<=num;i++)
    {
      System.out.println(first);
      third=first+second;
      first=second;
      second=third;
    }
  }
}
