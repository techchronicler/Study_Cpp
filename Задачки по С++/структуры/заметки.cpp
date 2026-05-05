//указатель на структуру person:
struct person *p;

(*указатель_на_структуру).им€_элемента


//¬ качестве значени€ указателю присваиваетс€ адрес объекта структуры того же типа:

struct person kate = {31, "Kate"};
struct person *p_kate = &kate;

int & red=rats; //red €вл€етс€ ссылкой, red=rats

int * red;//указательно на тип данных
