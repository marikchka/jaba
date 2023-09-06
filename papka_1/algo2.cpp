
#include<iostream>

using namespace std;

struct celltype {  
    int el; 
    celltype* next;
};

celltype* MAKENULL() {
    celltype* List = NULL;
    return List;
}

int END(celltype* List) {
    while (List->next!= nullptr) {
        List = List->next;
    }
    if (List->next == nullptr) {
        cout <<endl << "the last element: " << List->el << endl;
        return List->el;
    }
}

int FIRST(celltype* List) {
    if (List == nullptr)
        cout << "list is empty" << endl;
    else {
        cout << "the first el: " << List->el << endl;
        return List->el;
    }

}


void INSERT(celltype* List) {
    cout << "position of the element you want to delete: ";
    int position;
    cin >> position;
    cout << "element you want to insert: ";
    int value;
    cin >> value;
    celltype* newList = new celltype;
    newList->el = value;
    if (position == 0 || List == NULL) {
        newList->next = List;
        List = newList;
    }
    else {
        celltype* curr = List;        
        for (int i = 0; i < position - 1 && curr->next != NULL; i++) {
            curr = curr->next;
        }
        newList->next = curr->next;       
        curr->next = newList;
    }
}

void DELETE(celltype* List) {
    celltype p;
    cout << "element you want to delete: ";
    cin >> p.el;
    celltype* current=List;
    celltype* previous = nullptr;
    while (current != nullptr) {
        if (current->el == p.el) {
            if (previous == nullptr)
                List = List->next;
            else
                previous->next = current->next;
            delete current;
            return;

        }
        previous = current;
        current = current->next;
    }
}

int LOCATE(celltype* List) {
    int place = 0;
    celltype elm;
    cout << "enter element: ";
    cin >> elm.el;
    while (List != nullptr) {

        if (List->el == elm.el)
            break;
        List = List->next;
        place++;
    }
    cout<<"the position of this element: " << place << endl;
    return place;

}

void RETRIEVE(celltype* List) {
    celltype position;
    int index=0, place=0;
    cout << "enter the position of element: ";
    cin >> position.el;
    while (List != nullptr) {
        List = List->next;
        place++;
        if (place == position.el) {
            cout <<"element value by index: " << List->el<<endl;
        }
    }
}

celltype* NEXT(celltype *List ) {
    return List->next;

}

void PRINTLIST(celltype* List) {
    celltype* current = List;
    if ( List==nullptr) {
        cout << "list is empty";
    }
    else {
        while (current != nullptr) {
            cout << current->el << ' ';
            current = current->next;
        }
    }
}

int main() {
    celltype* List = nullptr;
    MAKENULL();
    List = new celltype{ 13, nullptr };
    List->next = new celltype{ 10, nullptr };
    List->next->next = new celltype{ 7, nullptr };
    List->next->next->next = new celltype{ 15, nullptr };
    List->next->next->next->next= new celltype{ 81, nullptr };
    
    PRINTLIST(List);
    END(List);
    FIRST(List);
    DELETE(List);
    INSERT(List);
    LOCATE(List);
    RETRIEVE(List);
    NEXT(List);
    PRINTLIST(List);
    return 0;

}


