#include <bits/stdc++.h> 
bool isArmstrong(int n) {
    // Write your code here
    int copy = n;

int sum= 0;

int lastdigit;

int k = n;

int count=0;

while(k!=0)

{

k=k/10;

count++;

}

while(n!=0)

{

lastdigit=n%10;

sum+=pow(lastdigit,count);

n=n/10;

}

if(sum==copy)

{

return true;

} else {

return false;

}
}
