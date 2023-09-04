class account
  {
    int acno;
    char name[50];
    int deposit;
    char type;

  public:
    void create_account();     
    void show_account() const; 
    void modify();             
    void dep(int);             
    void draw(int);            
    void report() const;       
    int retacno() const;       
    int retdeposit() const;    
    char rettype() const;      
  };                             


void write_account();            
void display_sp(int);            
void modify_account(int);        
void delete_account(int);        
void display_all();              
void deposit_withdraw(int, int); 
void intro();                    
