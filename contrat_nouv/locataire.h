#ifndef LOCATAIRE_H
#define LOCATAIRE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class locataire
{
private :
    QString nom,prenom,email,adr;
    long CIN,NumTel ;
    int id_local ;
public :
    locataire();
    locataire(QString,QString,QString,QString,long,long,int);
    QString get_nom() { return nom; }
    QString get_prenom() { return prenom ; }
    QString get_email() { return email ; }
    QString get_adr() { return adr ; }
    int get_id_local() { return id_local ; }
    long get_CIN()  { return CIN ; }
    long get_NumTel()  { return NumTel ; }
    bool ajouter_locataire() ;
    QSqlQueryModel * afficher_locataire();
    void rechercher_locataire(long) ;
    bool supprimer_locataire(long) ;
    bool modifier_locataire(long) ;
    QSqlQueryModel * recherche(QString,QString);
    QSqlQueryModel * afficherlct();

} ;
#endif // LOCATAIRE_H
