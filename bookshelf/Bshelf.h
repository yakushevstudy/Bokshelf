#include <iostream>

#define bshelf_h
#include <string>
#include <vector>
#include "PrintBook.h"
using namespace std;
class BookShelf{
	protected:
		vector<Shelf> shelfs;
			public:
				void addBook(PrintBook pb, int shelf_id){
					if(shelf_id<shelfs.size()-1){
						shelfs [shelf_id].addBook(pb);
						
					}else{
						cout<<"Error in Shelf ID! \n";
					}
				}
				PrintBook getBook(int shelf_id, int book_id){
					if(shelf_id<shelfs.size() -1){
					return	shelfs[shelf_id].getBook(book_id);
					
					}else{
						cout<<"Error in Sjelf ID! \n";
						
					}
		}
					void addShelf() {
						Shelf shelf;
						shelfs.push_back(shelf);
						
					}
					void Print(){
						cout<<"Bookshelf info:"<<shelfs.size()<<":\n";
						for(int i=0;i<shelfs.size();i++){
							cout<<"\t Shelf #"<<i+1<<"\n";
							shelfs[i].Print();
						
						}
					}
			
				};


