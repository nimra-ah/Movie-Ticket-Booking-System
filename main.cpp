#include <iostream>
using namespace std;

struct movieDetail{
    int movieNum;
    string name;
    int id;
    int movieSeat;
};
movieDetail movies[5];

void initializeMovies() {
    movies[0] = {1, "Frozen II", 432, 100};
    movies[1] = {2, "Titanic", 654, 50};
    movies[2] = {3, "Spider-Man", 639, 50};
    movies[3] = {4, "Toy Story 4", 598, 50};
    movies[4] = {5, "The Lion King", 412, 150};
}

void viewMovies() {
    for (int i = 0; i < 5; ++i) {
        cout << "\nMovie Number: " << movies[i].movieNum << endl;
        cout << "Movie Name: " << movies[i].name << endl;
        cout << "Id#: " << movies[i].id << endl;
        cout << "Available seats for the movie are: " << movies[i].movieSeat << endl;
    }
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
    
    initializeMovies();
    
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
