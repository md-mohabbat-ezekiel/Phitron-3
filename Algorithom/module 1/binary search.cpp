6 7 8 9 10 11 23 
int x
l=0             h=length-1
while(l<h)
{
mid=(l+h)/2
if (x==mid) return true;
else if(x<mid) l=0,h=mid-1; then search x;
else if (x>mid) l=mid+1;h=length-1; then search x;
continue;

}