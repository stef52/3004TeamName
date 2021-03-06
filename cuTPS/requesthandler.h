#ifndef REQUESTHANDLER_H
#define REQUESTHANDLER_H

#include <QObject>
#include <QTcpSocket>
#include <QList>
#include <QJsonValueRef>

#include "item.h"

class RequestHandler : public QObject
{
    Q_OBJECT
public:
    explicit RequestHandler(QObject *parent = 0);
    ~RequestHandler();
    int Login(std::string username);
    int AddToCart(QList<Item> items, std::string username);
    int addItem(Item item);
    int checkout(QList<Item> cartItems, std::string username);
    int emptyCart(std::string username);
    QList<Item> booksOwned(std::string username);
    QList<Item> viewCart(std::string username);
    QList<Item> getStuCourseLoad(std::string username);
    QList<Item> getAllItems();

    void AddBook(std::string, double, std::string, double, double, std::string);
    void AddCoruse(std::string,std::string,std::string,double,std::string);
    void BuyBook(std::string, std::string);


private slots:
    void socketChanged(QAbstractSocket::SocketState state);

signals:
    void connection(int status);

private:
    QTcpSocket *socket;
    std::string concatStrInt(std::string str, int num);
    void init();
    void kill();
};

#endif // REQUESTHANDLER_H
