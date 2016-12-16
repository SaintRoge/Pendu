#ifndef MAINWINDOW
#define MAINWINDOW

#include "fenetrependu.h"
#include <QMainWindow>


class FenPrincipale : public QWidget {

    Q_OBJECT

    public:
        FenPrincipale();

    private:
        QVBoxLayout *m_layoutPrincipal;

        QPushButton *m_boutonMode1Player;
        QPushButton *m_boutonMode2Players;
        QPushButton *m_boutonModeMultiplayer;

        int m_scoreRouge;
        int m_scoreBleu;
        int m_nbRounds;

        FenetrePendu *m_penduRouge;
        FenetrePendu *m_penduBleu;

    public slots:
        void mode1Player();
        void mode2Players();
        //void modeMultiplayer();

};

#endif // MAINWINDOW
