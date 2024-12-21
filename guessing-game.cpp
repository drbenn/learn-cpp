#include<iostream>
#include<random>

int main()
{
  // create a random number generator
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> distrib(1,10);

  // generate a random number
  int randomAnswer = distrib(gen);
  int guess{};

  // initial instructions
  std::cout << "Hello! This is a guessing game." << '\n';
  std::cout << "Guess a number between 1 and 10." << '\n';
  std::cout << "Or quit by guessing 0" << '\n';

  // initial guess inquiry
  std::cout << "Enter number and press enter to submit guess" << '\n';

  // loop to continue asking user for question until correct answer entered
  while (guess != randomAnswer)
  {
    // std::cout << guess << " is Incorrect - guess again!" << '\n';
    std::cin >> guess;
    
    // quit while guessing
    if (guess == 0)
    {
      std::cout << "Too tough huh? I would quit too you jabroni!" << '\n';
    } 
    else if (guess < randomAnswer)
    {
      std::cout << "Too Low, guess again!" << '\n';
    } 
    else {
      std::cout << "Too high, guess again!" << '\n';
    }
  }
  
  if (guess == randomAnswer)
  {
    std::cout << "YOU WON! You guessed the random number of " << randomAnswer;
  }

  return 0;
}
