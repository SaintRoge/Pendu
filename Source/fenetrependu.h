#ifndef FENETREPENDU
#define FENETREPENDU

#include <QWidget>
#include <QPushButton>
#include <QLCDNumber>
#include <QString>
#include <QMessageBox>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QChar>
#include <QInputDialog>
#include <QApplication>
#include <QPixmap>
#include <QProgressBar>
#include <QMenuBar>
#include <QAction>
#include <QMainWindow>

class FenetrePendu : public QWidget {

    Q_OBJECT

    public:

        FenetrePendu(int nbEssais, bool isRed, int mode);
        void setMot(QString mot);
        void pendu(QChar essai);
        int combo();
        int getScore();

    public slots:

        // Tous les slots des boutons "lettres"
        void boutonA();
        void boutonB();
        void boutonC();
        void boutonD();
        void boutonE();
        void boutonF();
        void boutonG();
        void boutonH();
        void boutonI();
        void boutonJ();
        void boutonK();
        void boutonL();
        void boutonM();
        void boutonN();
        void boutonO();
        void boutonP();
        void boutonQ();
        void boutonR();
        void boutonS();
        void boutonT();
        void boutonU();
        void boutonV();
        void boutonW();
        void boutonX();
        void boutonY();
        void boutonZ();

    private:

        // Tous les boutons "lettres"
        QPushButton *m_boutonA;
        QPushButton *m_boutonB;
        QPushButton *m_boutonC;
        QPushButton *m_boutonD;
        QPushButton *m_boutonE;
        QPushButton *m_boutonF;
        QPushButton *m_boutonG;
        QPushButton *m_boutonH;
        QPushButton *m_boutonI;
        QPushButton *m_boutonJ;
        QPushButton *m_boutonK;
        QPushButton *m_boutonL;
        QPushButton *m_boutonM;
        QPushButton *m_boutonN;
        QPushButton *m_boutonO;
        QPushButton *m_boutonP;
        QPushButton *m_boutonQ;
        QPushButton *m_boutonR;
        QPushButton *m_boutonS;
        QPushButton *m_boutonT;
        QPushButton *m_boutonU;
        QPushButton *m_boutonV;
        QPushButton *m_boutonW;
        QPushButton *m_boutonX;
        QPushButton *m_boutonY;
        QPushButton *m_boutonZ;

        QVBoxLayout *m_layoutPrincipal;
        QGridLayout *m_layoutLettres;
        QVBoxLayout *m_layoutEssaisMots;

        QLabel *m_labelMotAffiche;
        QLabel *m_images;
        QLabel *m_labelScore;

        QString m_mot;
        QString m_motAffiche;

        QProgressBar *m_barre;

        QMenu *m_menuFichier;
        QAction *m_actionNouveau;
        QAction *m_actionQuitter;

        int m_essais;
        int m_lettresTrouvees;
        int m_score;
        int m_combo;
        int m_pointsParLettre;
        int m_essaisBons;
        int m_nbEssais;

};

#endif // FENETREPENDU

