#include <iostream>
#include <ctime>
int main () {
char key;
unsigned long long used = 0;
int count = 0;
    std::cout << "Welcome to Omni Interview Simulator\n";
    std::cout << "When ready press Enter to begin\n";
    std::cin.get();
srand(time(nullptr)) ;
do{
if (count == 50) {
    used = 0;
    count = 0;
}

    int randnum;
    do {
          randnum = rand() % 50 + 1;
    } while (used & (1ULL << randnum));
    used |= (1ULL << randnum);
    count++;

switch(randnum){
case 1:
std::cout << "Tell me about yourself.\n";
break;
case 2:
std::cout << "What are your strengths?\n";
break;
case 3: 
std::cout << "What are your weaknesses?\n";
break;
case 4:
std::cout << "Walk me through your background.\n";
break;
case 5:
std::cout << "Why are you interested in this position?\n";
break;
case 6:
       std::cout << "What motivates you?\n";
     break;
case 7:
std::cout << "What makes you different from other candidates?\n";
     break;
case 8:
std::cout << "Tell me about a time you faced a challenge at work.\n";
     break;
case 9:
std::cout << "Describe a situation where you had to work under pressure.\n";
     break;
case 10:
std::cout << "What is something you are passionate about?\n";
     break;
case 11:
std::cout << "How do you handle feedback?\n";
     break;
case 12:
std::cout << "What is your approach to problem-solving?\n";
     break;
case 13:
std::cout << "Tell me about a time you had to make a difficult decision.\n";
     break;
case 14:
std::cout << "How do you prioritize your work?\n";
     break;
case 15:
std::cout << "What is your greatest achievement?\n";
     break;
case 16:
std::cout << "How do you deal with failure?\n";
     break;
case 17:
std::cout << "Why do you want to work for our company?\n";
     break;
case 18:
std::cout << "What is your vision for the future?\n";
     break;
case 19:
std::cout << "How do you build relationships with colleagues?\n";
     break;
case 20:
std::cout << "What do you know about our company?\n";
     break;
case 21:
std::cout << "Why should we hire you?\n";
     break;
case 22:
std::cout << "What interests you most about this industry?\n";
     break;
case 23:
std::cout << "How do you approach a problem you've never encountered before?\n";
     break;
case 24:
std::cout << "Describe a time you had to make a difficult decision.\n";
     break;
case 25:
std::cout << "What is your approach to learning and development?\n";
     break;
case 26:
std::cout << "What would you do if you disagreed with your manager?\n";
     break;
case 27:
std::cout << "What would you do if you were given a task you didn't know how to complete?\n";
     break;
case 28:
std::cout << "How do you prioritize when you have multiple deadlines?\n";
     break;
case 29:
std::cout << "How do you handle unexpected changes?\n";
     break;
case 30:
std::cout << "What would you do if you realized you couldn't meet a deadline?\n";
     break;
case 31:
std::cout << "Tell me about a time you worked as part of a team.\n";
     break;
case 32:
std::cout << "What role do you usually take in a team?\n";
     break;
case 33:
std::cout << "How do you handle criticism?\n";
     break;
case 34:
std::cout << "How do you give constructive feedback?\n";
     break;
case 35:
std::cout << "Describe a time you persuaded someone to accept your idea.\n";
     break;
case 36:
std::cout << "How do you communicate complex ideas to someone unfamiliar with the subject?\n";
     break;
case 37:
std::cout << "Do you prefer working independently or in a team?\n";
     break;
case 38:
std::cout << "Where do you see yourself in five years?\n";
     break;
case 39:
std::cout << "What are your long-term career goals?\n";
     break;
case 40:
std::cout << "What skills are you currently trying to improve?\n";
     break;
case 41:
std::cout << "What is something new you've learned recently?\n";
     break;
case 42:
std::cout << "What kind of work environment helps you perform your best?\n";
     break;
case 43:
std::cout << "What would you like to accomplish in your first year here?\n";
     break;
case 44:
std::cout << "What are your salary expectations?\n";
     break;
case 45:
std::cout << "Why should we choose you over another qualified candidate?\n";
     break;
case 46:
std::cout << "How do you decide when to ask for help?\n";
     break;
case 47:
std::cout << "What is one misconception people often have about you?\n";
     break;
case 48:
std::cout << "How do you define professionalism?\n";
     break;
case 49:
std::cout << "How would you describe yourself in three words?\n";
     break;
case 50:
std::cout << "Do you have any questions for us?\n";
     break;


}
std::cout << " Press Enter for another spin or Q to quit\n";
key = std::cin.get(); 

if (key != '\n') {
    std::cin.ignore(10000, '\n');
}


if(key == 'q' || key == 'Q'){
std::cout << "Thank you for using Omni\n";
std::cout << "Have a nice day\n";
}
else{
    std::cout << "Spining next question...\n";
}
}while(key != 'q' && key != 'Q');

    return 0;
}