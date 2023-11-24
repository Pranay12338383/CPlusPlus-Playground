#include <iostream>
#include <cstring>

using namespace std;

// CWH = Code With Harry

class  CWH{

protected:
       string title;
        float rating;
public:
             CWH( string s , float r){
                title = s ;
                rating = r ;
             }

            virtual void display(){ // Yaha humne virtual likha hai taki hum base ke pointer se jisko 
            // invoke kare wahi invoke ho , base wala invoke na ho 
            // Agar hum virtual nhi likhege aur display ko call karege to bus Pranay print ho jayega 
                     cout<<"Pranay";
              }
};


class CWH_video : public CWH{

float video_length;
public:
       CWH_video(string s , float r , float VL) :  CWH(s,r){
        video_length = VL;
       }
        
        void display()
        {
            cout<<"This is an amazing video with title " <<title<<endl;
            cout<<"Ratings :  " <<rating<<" Out of 5 stars "<<endl;
            cout<<"Length of this video is : " <<video_length<<" minutes"<<endl;
        
        
       }

};


class CWH_text : public CWH{


int words;
public:
       CWH_text( string s , float r  , int wc ) :  CWH(s,r){
        words = wc;
       }

       void display(){
       cout<<"This is an amazing text tutorial with title " <<title<<endl;
       cout<<"Ratings of this text tutorial is :  " <<rating<<" Out of 5 stars "<<endl;
       cout<<"No. of words in text tutorial is : " <<words<<" words"<<endl;
        

       }

};

int main(){

 string title = "Learning c++" ;
 float rating = 5 ;
 float video_length = 4;
 int words = 456;

 CWH_video video(title , rating , video_length);
 CWH_text  text (title , rating , words );

 CWH * ptr[2];

 ptr[0] = &video;
 ptr[1] = &text;

 ptr[0] ->display();
 (*ptr[1]). display();// You can use any method to invoke member functions 
 
       

return 0;

}