#include <fx.h>

class Game : public fx::App
{
public:
	Game() {}
	~Game(){}
};

fx::App* fx::CreateApp() {
	return new Game();
}