#include <iostream>
using namespace std;

class mergedata
{
    int arr[5];
    int Merge[10];
    public:void getdata()
          {
              int i;

              cout<<"\n enter the elements of array:";
              for(i=0;i<5;i++)
              {
                  cin>>arr[i];
              }
          }

          void operator &&(mergedata m3)
          {
              int i,j=0;

              for(i=0;i<5;i++)
              {
                  Merge[i]=arr[i];
              }

              for(i=5;i<10;i++,j++)
              {
                  Merge[i]=m3.arr[j];

              }
              cout<<"\n merged elements:=";
              for(i=0;i<10;i++)
              {
                  cout<<Merge[i];
                  cout<<"\t";
              }
          }
};

int main()
{
    mergedata m1,m2;

    m1.getdata();
    m2.getdata();

    m1&&m2;

    return 0;
}
