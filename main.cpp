#include <iostream>
using namespace std;

struct movieDetail{
    int movieNum;
    string name;
    int id;
    int movieSeat;
};
void viewMovies(){
    
    movieDetail movie1;
    movie1.movieNum = 1;
    cout<<"Movie Number: "<<movie1.movieNum<<endl;
    movie1.name="Frozen II";
    cout<<"Movie Name: "<<movie1.name<<endl;
    movie1.id=432;
    cout<<"Id# "<<movie1.id<<endl;
    movie1.movieSeat=100;
    cout<<"Available seats for the movie are: "<<movie1.movieSeat<<endl;
    
    movieDetail movie2;
    movie2.movieNum = 2;
    cout<<"\nMovie Number: "<<movie2.movieNum<<endl;
    movie2.name="Titanic";
    cout<<"Movie Name: "<<movie2.name<<endl;
    movie2.id=654;
    cout<<"Id# "<<movie2.id<<endl;
    movie2.movieSeat=50;
    cout<<"Available seats for the movie are: "<<movie2.movieSeat<<endl;
    
    movieDetail movie3;
    movie3.movieNum = 3;
    cout<<"\nMovie Number: "<<movie3.movieNum<<endl;
    movie3.name="Spider-Man";
    cout<<"Movie Name: "<<movie3.name<<endl;
    movie3.id=639;
    cout<<"Id# "<<movie3.id<<endl;
    movie3.movieSeat=50;
    cout<<"Available seats for the movie are: "<<movie3.movieSeat<<endl;
    
    movieDetail movie4;
    movie4.movieNum = 4;
    cout<<"\nMovie Number: "<<movie4.movieNum<<endl;
    movie4.name="Toy Story 4";
    cout<<"Movie Name: "<<movie4.name<<endl;
    movie4.id=598;
    cout<<"Id# "<<movie4.id<<endl;
    movie4.movieSeat=50;
    cout<<"Available seats for the movie are: "<<movie4.movieSeat<<endl;
    
    movieDetail movie5;
    movie5.movieNum = 5;
    cout<<"\nMovie Number: "<<movie5.movieNum<<endl;
    movie5.name="The Lion King";
    cout<<"Movie Name: "<<movie5.name<<endl;
    movie5.id=412;
    cout<<"Id# "<<movie5.id<<endl;
    movie5.movieSeat=150;
    cout<<"Available seats for the movie are: "<<movie5.movieSeat<<endl;
}
void one(){
    movieDetail movie1;
    int tckt;
    
    movie1.name="Frozen II";
    cout<<"The Available seats for  "<<movie1.name;
    movie1.movieSeat=100;
    cout<<" are: "<<movie1.movieSeat<<endl;
    
    cout<<"enter number of tickets"<<endl;
    cin>>tckt;
    
    if(tckt >movie1.movieSeat){
        cout<<"please enter valid number of tickets"<<endl;
    }else{
        movie1.movieSeat -= tckt;
        cout<<"tickets booked!! now Available seats are: "<<movie1.movieSeat;
    }
    
}
void two(){
    movieDetail movie2;
    int tckt;
    
    movie2.name="Titanic";
    cout<<"The Available seats for  "<<movie2.name;
    movie2.movieSeat=50;
    cout<<" are: "<<movie2.movieSeat<<endl;
    
    cout<<"enter number of tickets"<<endl;
    cin>>tckt;
    
    if(tckt >movie2.movieSeat){
        cout<<"please enter valid number of tickets"<<endl;
    }else{
        movie2.movieSeat -= tckt;
        cout<<"tickets booked!! now Available seats are: "<<movie2.movieSeat;
    }
}
void three(){
    movieDetail movie3;
    int tckt;
    
    movie3.name="Spider-Man";
    cout<<"The Available seats for  "<<movie3.name;
    movie3.movieSeat=50;
    cout<<" are: "<<movie3.movieSeat<<endl;
    
    cout<<"enter number of tickets"<<endl;
    cin>>tckt;
    
    if(tckt >movie3.movieSeat){
        cout<<"please enter valid number of tickets"<<endl;
    }else{
        movie3.movieSeat -= tckt;
        cout<<"tickets booked!! now Available seats are: "<<movie3.movieSeat;
    }

}
void four(){
    movieDetail movie4;
    int tckt;
    
    movie4.name="Toy Story 4";
    cout<<"The Available seats for  "<<movie4.name;
    movie4.movieSeat=50;
    cout<<" are: "<<movie4.movieSeat<<endl;
    
    cout<<"enter number of tickets"<<endl;
    cin>>tckt;
    
    if(tckt >movie4.movieSeat){
        cout<<"please enter valid number of tickets"<<endl;
    }else{
        movie4.movieSeat -= tckt;
        cout<<"tickets booked!! now Available seats are: "<<movie4.movieSeat;
    }
}
void five(){
    movieDetail movie5;
    int tckt;
    
    movie5.name="The Lion King";
    cout<<"The Available seats for   "<<movie5.name;
    movie5.movieSeat=150;
    cout<<" are: "<<movie5.movieSeat<<endl;
    
    cout<<"enter number of tickets"<<endl;
    cin>>tckt;
    
    if(tckt >movie5.movieSeat){
        cout<<"please enter valid number of tickets"<<endl;
    }else{
        movie5.movieSeat -= tckt;
        cout<<"tickets booked!! now Available seats are: "<<movie5.movieSeat;
    }
}
void bookTickets(){
    int slct;
    cout<<"Select a Movie Number"<<endl;
    viewMovies();
    cin>>slct;
    switch(slct){
        case 1:
        one();
        break;
        
        case 2:
        two();
        break;
        
        case 3:
        three();
        break;
        
        case 4:
        four();
        break;
        
        case 5:
        five();
        break;
        
        default:
        cout<<"enter valid movie number"<<endl;
    }
    
}
void cancel(){
    cout<<"Tickets cancelled!!"<<endl;
}
int main()
{
    int n,y;
    
    cout << "********************************************************************************" << endl;
    cout << "*                          Movie Ticket Booking System                         *" << endl;
    cout << "********************************************************************************" << endl;
    
    do{
    cout << "\nWelcome to the Movie Ticket Booking System!" << endl;
    cout << "Please choose an option:" << endl;

    cout<<"View available movies (Press 1)"<<endl;
    cout<<"Book tickets for a selected movie (Press 2)"<<endl;
    cout<<"Cancel a booked ticket (Press 3)"<<endl;
    
    cin>>n;
    switch(n){
        case 1:
        viewMovies();
        break;
        
        case 2:
        bookTickets();
        break;
        
        case 3:
        cancel();
        break;
        
        default:
        cout<<"Enter valid number!"<<endl;
        break;
    }
        
        cout << "\nPress 0 to stop the procedure, or press any other number to continue: ";
        cin >> y;

    }while(y != 0);
      cout<<"Exiting the system."<<endl;
      
    return 0;
}