//#include "Keeper.h";
//using namespace std;
//
//Keeper::Keeper() {
//	list = new List();
//	cout << "��� ������ ����������� ������� ������ Keeper." << endl;
//}
//
//Keeper::Keeper(List* list) {
//	this->list = list;
//	cout << "��� ������ ����������� ����������� ������� ������ Keeper." << endl;
//}
//
//Keeper::~Keeper() {
//	clear();
//	cout << "��� ������ ���������� ������� ������ Keeper." << endl;
//}
//
//List* Keeper::getList() {
//	return list;
//}
//
//void Keeper::addObject(T data, int i) {
//	list->insert(data, i);
//}
//
//T Keeper::getObject(int i) {
//	list->get(i);
//}
//
//void Keeper::remove(int i) {
//	list->remove(i);
//}
//
//int Keeper::size() {
//	list->getSize();
//}
//
//void Keeper::clear() {
//	list->clear();
//}
//
//void Keeper::importList() {
//
//}
//
//void Keeper::exportList() {
//
//}