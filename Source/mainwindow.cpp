#include "mainwindow.h"
#include "fenetrependu.h"
#include <QApplication>
#include <QWidget>

FenPrincipale::FenPrincipale() {

    setWindowIcon(QIcon(QCoreApplication::applicationDirPath() + "/pendu.png"));
    setWindowTitle("Le Pendu");

    m_layoutPrincipal = new QVBoxLayout(this);

    m_boutonMode1Player = new QPushButton(this);
    m_boutonMode2Players = new QPushButton(this);
    m_boutonModeMultiplayer = new QPushButton(this);

    m_boutonMode1Player->setText("1 Player");
    m_boutonMode2Players->setText("2 Players");
    m_boutonModeMultiplayer->setText("Multiplayer");

    m_boutonMode1Player->setFlat(true);
    m_boutonMode2Players->setFlat(true);
    m_boutonModeMultiplayer->setFlat(true);

    m_layoutPrincipal->addWidget(m_boutonMode1Player);
    m_layoutPrincipal->addWidget(m_boutonMode2Players);
    m_layoutPrincipal->addWidget(m_boutonModeMultiplayer);

    setLayout(m_layoutPrincipal);

    QObject::connect(m_boutonMode1Player, SIGNAL(clicked(bool)), this, SLOT(mode1Player()));
    QObject::connect(m_boutonMode2Players, SIGNAL(clicked(bool)), this, SLOT(mode2Players()));
}

void FenPrincipale::mode1Player(){
    FenetrePendu *fenetre = new FenetrePendu(6, true, 0);
    fenetre->show();
}

void FenPrincipale::mode2Players() {

    m_scoreRouge = 0;
    m_scoreBleu = 0;
    m_nbRounds = 5;
    m_penduRouge = new FenetrePendu(7, true, 1);
    m_penduBleu = new FenetrePendu(7, true, 1);

    for (int i(0); i < m_nbRounds; i++) {

        m_penduRouge = new FenetrePendu(7, true, 1);
        m_penduRouge->show();
        m_scoreRouge += m_penduRouge->getScore();

        m_penduBleu = new FenetrePendu(7, true, 1);
    }
}
