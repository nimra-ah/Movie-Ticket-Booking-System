#include <iostream>
using namespace std;

struct movieDetail{
    int movieNum;
    string name;
    int id;
    int movieSeat;
    int initialSeats;
    int bookedSeats;
};
movieDetail movies[5];

void initializeMovies() {
    movies[0] = {1, "Frozen II", 432, 100, 0};
    movies[1] = {2, "Titanic", 654, 50, 0};
    movies[2] = {3, "Spider-Man", 639, 50, 0};
    movies[3] = {4, "Toy Story 4", 598, 50, 0};
    movies[4] = {5, "The Lion King", 412, 150, 0};
}

void viewMovies() {
    for (int i = 0; i < 5; ++i) {
        cout << "\nMovie Number: " << movies[i].movieNum << endl;
        cout << "Movie Name: " << movies[i].name << endl;
        cout << "Id#: " << movies[i].id << endl;
        cout << "Available seats for the movie are: " << movies[i].movieSeat << endl;
        cout << "Total booked seats for the movie are: " << movies[i].bookedSeats << endl;
    }
}

void bookTickets(){
    int slct,tckt;
    viewMovies();
    cout<<"Select a Movie Number"<<endl;
    cin>>slct;
    
    if (slct < 1 || slct > 5) {
        cout << "Please enter a valid movie number." << endl;
        return;
    }
    
    movieDetail &selectedMovie = movies[slct - 1];
    
    cout << "The Available seats for " << selectedMovie.name << " are: " << selectedMovie.movieSeat << endl;
    cout << "Enter number of tickets: ";
    cin >> tckt;
    
    if (tckt > selectedMovie.movieSeat) {
        cout << "Please enter a valid number of tickets." << endl;
    } else {
        selectedMovie.movieSeat -= tckt;
        selectedMovie.bookedSeats += tckt;  
        cout << "Tickets booked! Now available seats for " << selectedMovie.name << " are: " << selectedMovie.movieSeat << endl;
    }
    
}
void cancel(){
    
    int slct, cancelTickets;
    cout << "Enter the movie number you want to cancel tickets for: ";
    cin >> slct;

    if (slct < 1 || slct > 5) {
        cout << "Invalid movie number!" << endl;
        return;
    }

    movieDetail &selectedMovie = movies[slct - 1];

    cout << "You have booked " << selectedMovie.bookedSeats << " tickets for " << selectedMovie.name << endl;
    cout << "Enter the number of tickets to cancel for " << selectedMovie.name << ": ";
    cin >> cancelTickets;
    
    if (cancelTickets < 0) {
        cout << "You can't cancel a negative number of tickets!" << endl;
    }
    else if (cancelTickets > selectedMovie.bookedSeats) {
        cout << "You can't cancel more tickets than you have booked!" << endl;
    }
    else {
        selectedMovie.movieSeat += cancelTickets; 
        selectedMovie.bookedSeats -= cancelTickets;
        cout << "Tickets canceled! Now available seats for " << selectedMovie.name << " are: " << selectedMovie.movieSeat << endl;
    }
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
