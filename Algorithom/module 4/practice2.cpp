Calculate the time complexity of the following code snippets.		

(a)
int count = 0;
for (int i = n; i > 0; i /= 2) 
{
    for (int j = 0; j < n; j+=5) 
   {
        count += 1;
    }
}
 Time Complexity: O(n log n)

(b)
for(int i =1; i*i<n; i++)
{
     cout << “hello”;
}
Time Complexity: O(sqrt(n))

(c)
for(int i =1; i<n; i=i*2)
{
   for(int j=1; j*j<n; j+=2)
  {
      cout << “hello”;
   }
}
Time Complexity: O(log n * sqrt(n))

(d)
int m = 1;
for(int i=0; m<=n; i++)
{
    m+=i;
}
 O(sqrt(n)
