#include <system.h>
#include <sprites.h>
#include "bin/background.h"
#include "bin/sprites.h"

int main(void);

sprite player;

int main() {
    load_background(background);
    clrscr();
    
    
    player.resource = &sprites_1_0;
    player.x=10;
    player.y=10;
    player.width = 30;
    player.height = 21;
    calculate_coords(&player);
    draw_sprite(&player);
    
    
    while(1){
    
    }    
    
    return 0;
}
