#include <iostream>
#include <fstream>

/** Creates a user. Prompts the user for information and then writes the information. **/
void createUser();
void writeUserDetails(std::string, std::string);

int main(){
  std::fstream file("login_credentials", file.in | file.out);

  // Check to see whether the user exists yet or not.
  if(!file.is_open()){
    createUser();
  }else{
    std::string username;
    std::string password;
    std::string attempt_username;
    std::string attempt_password;
    file >> username;
    file >> password;
    // Otherwise, let the user try to sign-in.
    std::cout << "Welcome back!\nPlease sign-in below." << std::endl;
    std::cout << "Username: ";
    std::getline(std::cin, attempt_username);
    std::cout << "Password: ";
    std::getline(std::cin, attempt_password);

    if (username == attempt_username && password == attempt_password){
      std::cout << "Login was successful!" << std::endl;
    }else{
      std::cout << "That didn't work. Your credentials are either incorrect or I suck as programming." << std::endl;
    }
  }

  return 0;
}

void createUser()
{
  std::cout << "Let's create that user for you." << std::endl;

  std::string username;
  std::string password;
  std::string attempt_password;

  std::cout << "Hello! It appears that you haven't yet created an account.\nPlease do so now." << std::endl;
  std::cout << "Username: ";
  std::getline(std::cin, username);

  std::cout << "Perfect, " << username << "! Let's get your password now." << std::endl;
  std::cout << "Password: ";
  std::getline(std::cin, password);
  std::cout << "Password (verify): ";
  std::getline(std::cin, attempt_password);

  if(password == attempt_password){
    writeUserDetails(username, password);
  }else{
    std::cout << "Please try that again. Something didn't work." << std::endl;
  }
}

void writeUserDetails(std::string username, std::string password){
  std::cout << "Writing credentials now..." << std::endl;
  std::fstream file("login_credentials", file.in | file.out | file.app);
  file << username << "\n" << password ;
}
