// Problem Link - https://www.codingninjas.com/studio/guided-paths/basics-of-c/content/118519/offering/1376726
int totalPrime(int s,int e){

    int count=0;

    while(s<=e){

        int i=2;

        bool flag=false;

        while(i<s){

            if(s%i==0){

                flag=true;

                break;

            }

            i++;

        }

        if(flag==false){

            count++;

        }

        s++;

    }

    return count;

}
int main() {
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}
