#include "fenetrependu.h"

FenetrePendu::FenetrePendu(int nbEssais, bool isRed, int mode) : QWidget() {

    setWindowTitle("Score : 0");

    if (!isRed || mode == 0) {
        setWindowIcon(QIcon(QCoreApplication::applicationDirPath() + "/red.png"));
    }

    else {
        setWindowIcon(QIcon(QCoreApplication::applicationDirPath() + "/blue.png"));
    }

    while (m_mot.length() == 0) {
    m_mot = QInputDialog::getText(this, "Le Mot", "Saisissez le mot a trouver", QLineEdit::Password);
    }

    if (isRed || mode == 0) {
        setWindowIcon(QIcon(QCoreApplication::applicationDirPath() + "/red.png"));
    }

    else {
        setWindowIcon(QIcon(QCoreApplication::applicationDirPath() + "/blue.png"));
    }

    for (int i(0); i < m_mot.size(); i++) {
        m_motAffiche.append(QString("_"));
    }

    m_labelMotAffiche = new QLabel(m_motAffiche, this);
    m_labelMotAffiche->setAlignment(Qt::AlignCenter);

    m_lettresTrouvees = 0;
    m_combo = 0;
    m_pointsParLettre = 10;
    m_essaisBons = 0;

    m_essais = nbEssais;
    m_nbEssais = nbEssais;
    m_images = new QLabel;
    m_images->setPixmap(QPixmap(QCoreApplication::applicationDirPath() + "/7.jpg"));


    m_boutonA = new QPushButton("A", this);
    m_boutonB = new QPushButton("B", this);
    m_boutonC = new QPushButton("C", this);
    m_boutonD = new QPushButton("D", this);
    m_boutonE = new QPushButton("E", this);
    m_boutonF = new QPushButton("F", this);
    m_boutonG = new QPushButton("G", this);
    m_boutonH = new QPushButton("H", this);
    m_boutonI = new QPushButton("I", this);
    m_boutonJ = new QPushButton("J", this);
    m_boutonK = new QPushButton("K", this);
    m_boutonL = new QPushButton("L", this);
    m_boutonM = new QPushButton("M", this);
    m_boutonN = new QPushButton("N", this);
    m_boutonO = new QPushButton("O", this);
    m_boutonP = new QPushButton("P", this);
    m_boutonQ = new QPushButton("Q", this);
    m_boutonR = new QPushButton("R", this);
    m_boutonS = new QPushButton("S", this);
    m_boutonT = new QPushButton("T", this);
    m_boutonU = new QPushButton("U", this);
    m_boutonV = new QPushButton("V", this);
    m_boutonW = new QPushButton("W", this);
    m_boutonX = new QPushButton("X", this);
    m_boutonY = new QPushButton("Y", this);
    m_boutonZ = new QPushButton("Z", this);

    m_barre = new QProgressBar;

    m_layoutEssaisMots = new QVBoxLayout;
    m_layoutEssaisMots->addWidget(m_images);
    m_layoutEssaisMots->addWidget(m_labelMotAffiche);

    m_layoutLettres = new QGridLayout;
    m_layoutLettres->addWidget(m_boutonA, 0, 0);
    m_layoutLettres->addWidget(m_boutonB, 0, 1);
    m_layoutLettres->addWidget(m_boutonC, 0, 2);
    m_layoutLettres->addWidget(m_boutonD, 0, 3);
    m_layoutLettres->addWidget(m_boutonE, 0, 4);
    m_layoutLettres->addWidget(m_boutonF, 0, 5);
    m_layoutLettres->addWidget(m_boutonG, 0, 6);
    m_layoutLettres->addWidget(m_boutonH, 0, 7);
    m_layoutLettres->addWidget(m_boutonI, 0, 8);
    m_layoutLettres->addWidget(m_boutonJ, 0, 9);
    m_layoutLettres->addWidget(m_boutonK, 1, 1);
    m_layoutLettres->addWidget(m_boutonL, 1, 2);
    m_layoutLettres->addWidget(m_boutonM, 1, 3);
    m_layoutLettres->addWidget(m_boutonN, 1, 4);
    m_layoutLettres->addWidget(m_boutonO, 1, 5);
    m_layoutLettres->addWidget(m_boutonP, 1, 6);
    m_layoutLettres->addWidget(m_boutonQ, 1, 7);
    m_layoutLettres->addWidget(m_boutonR, 1, 8);
    m_layoutLettres->addWidget(m_boutonS, 2, 2);
    m_layoutLettres->addWidget(m_boutonT, 2, 3);
    m_layoutLettres->addWidget(m_boutonU, 2, 4);
    m_layoutLettres->addWidget(m_boutonV, 2, 5);
    m_layoutLettres->addWidget(m_boutonW, 2, 6);
    m_layoutLettres->addWidget(m_boutonX, 2, 7);
    m_layoutLettres->addWidget(m_boutonY, 3, 4);
    m_layoutLettres->addWidget(m_boutonZ, 3, 5);

    m_layoutPrincipal = new QVBoxLayout;
    m_layoutPrincipal->addLayout(m_layoutEssaisMots);
    m_layoutPrincipal->addLayout(m_layoutLettres);
    m_layoutPrincipal->addWidget(m_barre);

    setLayout(m_layoutPrincipal);

    QObject::connect(m_boutonA, SIGNAL(clicked()), this, SLOT(boutonA()));
    QObject::connect(m_boutonB, SIGNAL(clicked()), this, SLOT(boutonB()));
    QObject::connect(m_boutonC, SIGNAL(clicked()), this, SLOT(boutonC()));
    QObject::connect(m_boutonD, SIGNAL(clicked()), this, SLOT(boutonD()));
    QObject::connect(m_boutonE, SIGNAL(clicked()), this, SLOT(boutonE()));
    QObject::connect(m_boutonF, SIGNAL(clicked()), this, SLOT(boutonF()));
    QObject::connect(m_boutonG, SIGNAL(clicked()), this, SLOT(boutonG()));
    QObject::connect(m_boutonH, SIGNAL(clicked()), this, SLOT(boutonH()));
    QObject::connect(m_boutonI, SIGNAL(clicked()), this, SLOT(boutonI()));
    QObject::connect(m_boutonJ, SIGNAL(clicked()), this, SLOT(boutonJ()));
    QObject::connect(m_boutonK, SIGNAL(clicked()), this, SLOT(boutonK()));
    QObject::connect(m_boutonL, SIGNAL(clicked()), this, SLOT(boutonL()));
    QObject::connect(m_boutonM, SIGNAL(clicked()), this, SLOT(boutonM()));
    QObject::connect(m_boutonN, SIGNAL(clicked()), this, SLOT(boutonN()));
    QObject::connect(m_boutonO, SIGNAL(clicked()), this, SLOT(boutonO()));
    QObject::connect(m_boutonP, SIGNAL(clicked()), this, SLOT(boutonP()));
    QObject::connect(m_boutonQ, SIGNAL(clicked()), this, SLOT(boutonQ()));
    QObject::connect(m_boutonR, SIGNAL(clicked()), this, SLOT(boutonR()));
    QObject::connect(m_boutonS, SIGNAL(clicked()), this, SLOT(boutonS()));
    QObject::connect(m_boutonT, SIGNAL(clicked()), this, SLOT(boutonT()));
    QObject::connect(m_boutonU, SIGNAL(clicked()), this, SLOT(boutonU()));
    QObject::connect(m_boutonV, SIGNAL(clicked()), this, SLOT(boutonV()));
    QObject::connect(m_boutonW, SIGNAL(clicked()), this, SLOT(boutonW()));
    QObject::connect(m_boutonX, SIGNAL(clicked()), this, SLOT(boutonX()));
    QObject::connect(m_boutonY, SIGNAL(clicked()), this, SLOT(boutonY()));
    QObject::connect(m_boutonZ, SIGNAL(clicked()), this, SLOT(boutonZ()));

}

void FenetrePendu::setMot(QString mot) {
    m_mot = mot;
}

void FenetrePendu::boutonA() {
    delete m_boutonA;
    m_boutonA = 0;
    pendu('a');
}

void FenetrePendu::boutonB() {
    delete m_boutonB;
    m_boutonB = 0;
    pendu('b');
}

void FenetrePendu::boutonC() {
    delete m_boutonC;
    m_boutonC = 0;
    pendu('c');
}

void FenetrePendu::boutonD() {
    delete m_boutonD;
    m_boutonD = 0;
    pendu('d');
}

void FenetrePendu::boutonE() {
    delete m_boutonE;
    m_boutonE = 0;
    pendu('e');
}

void FenetrePendu::boutonF() {
    delete m_boutonF;
    m_boutonF = 0;
    pendu('f');
}

void FenetrePendu::boutonG() {
    delete m_boutonG;
    m_boutonG = 0;
    pendu('g');
}

void FenetrePendu::boutonH() {
    delete m_boutonH;
    m_boutonH = 0;
    pendu('h');
}

void FenetrePendu::boutonI() {
    delete m_boutonI;
    m_boutonI = 0;
    pendu('i');
}

void FenetrePendu::boutonJ() {
    delete m_boutonJ;
    m_boutonJ = 0;
    pendu('j');
}

void FenetrePendu::boutonK() {
    delete m_boutonK;
    m_boutonK = 0;
    pendu('k');
}

void FenetrePendu::boutonL() {
    delete m_boutonL;
    m_boutonL = 0;
    pendu('l');
}

void FenetrePendu::boutonM() {
    delete m_boutonM;
    m_boutonM = 0;
    pendu('m');
}

void FenetrePendu::boutonN() {
    delete m_boutonN;
    m_boutonN = 0;
    pendu('n');
}

void FenetrePendu::boutonO() {
    delete m_boutonO;
    m_boutonO = 0;
    pendu('o');
}

void FenetrePendu::boutonP() {
    delete m_boutonP;
    m_boutonP = 0;
    pendu('p');
}

void FenetrePendu::boutonQ() {
    delete m_boutonQ;
    m_boutonQ = 0;
    pendu('q');
}

void FenetrePendu::boutonR() {
    delete m_boutonR;
    m_boutonR = 0;
    pendu('r');
}

void FenetrePendu::boutonS() {
    delete m_boutonS;
    m_boutonS = 0;
    pendu('s');
}

void FenetrePendu::boutonT() {
    delete m_boutonT;
    m_boutonT = 0;
    pendu('t');
}

void FenetrePendu::boutonU() {
    delete m_boutonU;
    m_boutonU = 0;
    pendu('u');
}

void FenetrePendu::boutonV() {
    delete m_boutonV;
    m_boutonV = 0;
    pendu('v');
}

void FenetrePendu::boutonW() {
    delete m_boutonW;
    m_boutonW = 0;
    pendu('w');
}

void FenetrePendu::boutonX() {
    delete m_boutonX;
    m_boutonX = 0;
    pendu('x');
}

void FenetrePendu::boutonY() {
    delete m_boutonY;
    m_boutonY = 0;
    pendu('y');
}

void FenetrePendu::boutonZ() {
    delete m_boutonZ;
    m_boutonZ = 0;
    pendu('z');
}

void FenetrePendu::pendu(QChar essai) {

    bool trouve(false);

    for (int i(0); i < m_mot.size(); i++) {
        if (essai == m_mot[i]) { // Si on a trouvé

            m_motAffiche[i] = essai;
            m_labelMotAffiche->setText(m_motAffiche);
            trouve = true;
            m_lettresTrouvees++;
            m_barre->setValue((m_lettresTrouvees * 100) / m_mot.size());

            if (m_lettresTrouvees == m_mot.size()) {
                m_score += m_pointsParLettre + combo() + (m_nbEssais - m_essais) * 50;

                if (m_essais == m_nbEssais) {
                    m_score += 1000;
                }

                setWindowTitle("Score : " + QString::number(m_score));
                QMessageBox::information(this, "Gagne", "Bravo ! Vous avez gagne ! Le mot etait bien " + m_mot + ". Votre score : " + QString::number(m_score));
                qApp->quit();
            }
        }
    }

    if (!trouve) { // Si on n'a pas trouvé
        m_essais--;
        m_combo = 0;

        if (m_essais == 7) {
            m_images->setPixmap(QPixmap(QCoreApplication::applicationDirPath() + "/7.jpg"));
        }

        if (m_essais == 6) {
            m_images->setPixmap(QPixmap(QCoreApplication::applicationDirPath() + "/6.jpg"));
        }

        if (m_essais == 5) {
            m_images->setPixmap(QPixmap(QCoreApplication::applicationDirPath() + "/5.jpg"));
        }

        else if (m_essais == 4) {
            m_images->setPixmap(QPixmap(QCoreApplication::applicationDirPath() + "/4.jpg"));
        }

        else if (m_essais == 3) {
            m_images->setPixmap(QPixmap(QCoreApplication::applicationDirPath() + "/3.jpg"));
        }

        else if (m_essais == 2) {
            m_images->setPixmap(QPixmap(QCoreApplication::applicationDirPath() + "/2.jpg"));
        }

        else if (m_essais == 1) {
            m_images->setPixmap(QPixmap(QCoreApplication::applicationDirPath() + "/1.jpg"));
        }

        else {
            m_images->setPixmap(QPixmap(QCoreApplication::applicationDirPath() + "/0.jpg"));
            m_score = 0 + m_essaisBons * 2;
            QMessageBox::critical(this, "Pendu !", "PENDU ! Le mot etait " + m_mot + ". Votre score : " + QString::number(m_score));
            qApp->quit();
        }
    }

    else {
        m_essaisBons ++;
        m_score += m_pointsParLettre + combo();
        m_combo++;
        setWindowTitle("Score : " + QString::number(m_score));
    }

}

int FenetrePendu::combo() {
    return (m_score / 10) + (m_pointsParLettre * m_combo)
            + m_lettresTrouvees;
}

int FenetrePendu::getScore() {
    return m_score;
}
