#include "UtPod.h"
#include <iostream>
using namespace std;

UtPod::UtPod(){
    songs = NULL;
    memSize = MAX_MEMORY;
}

UtPod::UtPod(int size){
    songs = NULL;
    memSize = size;
}

int UtPod::addSong(Song const &s){

    if(s.getSize() <= memSize) { //if the size will allow
        SongNode *newSong = new SongNode; // create new song node
        newSong->song.setArtist(s.getArtist());
        newSong->song.setTitle(s.getTitle());
        newSong->song.setSize(s.getSize());
        newSong->next = songs;
        songs = newSong;
        memSize = memSize - s.getSize();
        return(SUCCESS);
    }
    else{
        return(NO_MEMORY);
    }

}

int UtPod::removeSong(Song const &s){
    /*
    SongNode travel, previous;
    travel = songs;
    while(travel != s || travel != NULL){
        previous = travel;
        travel = travel->next;
    }
    if(travel == NULL){
         return(-2);
    }
    else{
        memSize = memSize + travel->s.getSize(); // adds that memory back into the UtPod
        previous->next = s->next;
        delete(travel);// removes the song from actual memory
    }
     */
}
void UtPod::shuffle() {

}

void UtPod::showSongList() {

    SongNode *travel;
    travel = songs;
    while(travel != NULL){
        cout << travel->song.getTitle() << ", " << travel->song.getArtist() << ", " << travel->song.getSize() << endl;
        travel = travel->next;
    }

}
void UtPod::sortSongList() {

}

void UtPod::clearMemory() {

}

int UtPod::getRemainingMemory() {

}



