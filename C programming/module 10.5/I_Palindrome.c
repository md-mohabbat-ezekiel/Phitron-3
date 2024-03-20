#include<stdio.h>
#include<string.h>
int main()
{
   char a[1001];
   scanf("%s",&a);
   int n=strlen(a);
   int i=0,j=n-1;
   while(i<j)
   {
   char tmp=a[i];
   a[i]=a[j];
   a[j]=tmp;
   i++;
   j--;
   }
// int isPalindrome = 1; // Added a flag to determine if the string is a palindrome
    // for (int i = 0; i < n; i++) {
    //     if (a[i] != a[n - i - 1]) { // Changed comparison to check against reversed string
    //         isPalindrome = 0; // If characters don't match, set flag to 0
    //         break; // Break out of loop as it's not a palindrome
    //     }
 if(a[i]==a[j])

 { 
 printf("YES\n");
 }
 else
 {
 printf("NO\n");
 }
    return 0;
}
//  if (isPalindrome) {
    //     printf("YES\n");
    // } else {
    //     printf("NO\n");
    // }
// Given a string S. Determine whether S is Palindrome or not

// Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

// Input
// Only one line contains a string S (1 ≤ |S| ≤ 1000) where |S| is the length of the string and it consists of lowercase letters only.

// Output
// Print "YES" if the string is palindrome, otherwise print "NO".