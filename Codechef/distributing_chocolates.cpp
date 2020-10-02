/* On the occasion of many upcoming festivals, Principal Manali decided to give chocolates to all the students in the school. There are a total of N students in the school. During distribution of chocolates, however, some students got less chocolates as compared to others. Now since some children were unhappy, she decided to give everyone a chance to trade chocolates. The trading takes place in the following manner:

All the students are arranged in a straight line. Each student is given a chance to trade chocolates with any student within his/her vision. But since everyone is greedy, any student will always choose to trade with the student having the highest number of chocolates in his/her vision. (If he/she himself has the maximum number of chocolates in his/her vision, he/she will not get any more chocolates.)

The vision of each i-th student is given by b[i], which means that the student standing at i-th position can see atmost b[i] students in front and behind of him. For example, if there are 6 students and if the vision of student standing at position=2 is 3, he/she can only see the students at position=1, position=3, position=4, position=5 only. He cannot see the student at 6-th position.

Once he has found out the student which has the maximum number of chocolates according to the above conditions, he/she gets one-third of the difference (floor value) of chocolates from the student having the maximum number of chocolates.

But here comes the catch! If there are multiple students in his vision, who have this maximum amount of chocolates, he will not get chocolates from any of them. The trading starts with the leftmost student (student at position-1). After all the trading is done, Manali is interested in finding how many chocolates do each of the students have. Please help her in solving this problem.

(floor value:- Greatest integer value)

Input
The first line of input contains an integer N, denoting the number of students.
The second line of input contains N space separated integers A[i], denoting the initial number of chocolates that each student has.
The third line of input contains N space separated integers B[i], denoting vision of each student.
Output
Print N space separated integers A[1],..,A[i],A[i+1]...A[n], representing the chocolates each student has after the trading has been completed.

Constraints
1≤N≤105
1≤A[i]≤108
1≤B[i]<N
Sample Input 1
  3
  5 16 4
  2 2 1
Sample Output 1
  8 10 7
Sample Input 2
  5
  8 15 25 10 6
  1 2 3 2 1
Sample Output 2
  10 17 18 11 8 */


#include<bits/stdc++.h>
 using namespace std;
 int main()
{
    int test;
    cin>>test;
while(test>0)
{
 int l1,l2,w1,w2,count=0,x,y,temp;
 cin>>l1>>l2>>w1>>w2;
 for(int i=l1;i<=l2;i++)
 {
  for(int j=w1;j<=w2;j++)
  {
   x=i;
   y=j;
   //cout<<x<<"*"<<y<<" ";
   while(x!=y)
   {
    if(x>y)
    {
     x=x-y;
     //cout<<x<<"*"<<y<<" ";
     count++;
    }
    else if(y>x)
    {
     //y=y-x;
     temp=x;
     x=y;
     y=temp;
     x=x-y;
     count++;
    }
   }
   if(x==y)
   count++;
  }
 }
 cout<<"\n"<<count;
 test--;
}
 return 0;
}
