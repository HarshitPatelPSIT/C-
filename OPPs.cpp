 #include<bits/stdc++.h>
 using namespace std;
//constuctor and desturctor
// class rectangle{
//     public:
//     int l;
//     int b;
//     rectangle(){
//         l=0;
//         b=0;
//     }
//      rectangle(int x,int y){
//         l=x;
//         b=y;
//     }
//     rectangle(rectangle& r){
//         l=r.l;
//         b=r.b;
//     }
//     ~rectangle(){
//         cout<<"Destructor is called"<<endl;
//     }
// };
// int main(){
//     rectangle* r1=new rectangle();
//     cout<<r1->l<<" "<<r1->b<<endl;
//     delete r1;
//     rectangle r2(3,4);
//      cout<<r2.l<<" "<<r2.b<<endl;
//      rectangle r3=r2;
//       cout<<r3.l<<" "<<r3.b<<endl;
// return 0;
// }
/////////////////
///Class type public protected private 
class parent{
    public:
    int x=0;
    protected:
    int y=1;
    private:
    int z=2;
    

};
class child1: public parent{

};
int main(){
    parent p;
    cout<<p.x;
  return 0;
}