#include "../login.h"

void Login::mousePressEvent(QMouseEvent *event){ //鼠标按键被按下
    if (event->button() == Qt::LeftButton){
        m_moving = true;
        m_lastPos = event->globalPosition().toPoint() - this->pos();
    }
    return QDialog::mousePressEvent(event);
}

void Login::mouseMoveEvent(QMouseEvent *event){ //鼠标按下左键移动
    QPoint eventPos=event->globalPosition().toPoint();
    if (m_moving && (event->buttons() & Qt::LeftButton)
        && (eventPos-m_lastPos).manhattanLength() > QApplication::startDragDistance()){
        move(eventPos-m_lastPos);
        m_lastPos = eventPos - this->pos();
    }
    return QDialog::mouseMoveEvent(event);
}

void Login::mouseReleaseEvent(QMouseEvent *event){ //鼠标按键被释放
    m_moving = false;     //停止移动
    event->accept();
}

void Login::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing); // 平滑渲染
    QPixmap pixmap(":/Pictures/Images/背景图3.jpg");
    QPixmap scaled = pixmap.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    painter.drawPixmap(0, 0, scaled);
    painter.setBrush(QColor(0, 0, 0, 100));
    painter.setPen(Qt::NoPen);
    painter.drawRect(rect());
    QWidget::paintEvent(event);
}
