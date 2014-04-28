typedef double Money;
class Account{
public:
  using Money = double;
  Money balance() {return bal;}
private:
  Money bal;
};

int main()
{

  return 0;
}
