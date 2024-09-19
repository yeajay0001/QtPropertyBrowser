#ifndef QTPROPERTYBROWSERGLOBAL_H
#define QTPROPERTYBROWSERGLOBAL_H
#include <memory>

#ifndef QT_QTPROPERTYBROWSER_EXPORT
#if defined(QT_QTPROPERTYBROWSER_MAKE_LIB)  // 定义此宏将构建library
#define QT_QTPROPERTYBROWSER_EXPORT Q_DECL_EXPORT
#else
#define QT_QTPROPERTYBROWSER_EXPORT Q_DECL_IMPORT
#endif
#endif

#ifndef QT_QTPROPERTYBROWSER_EXPORT
#define QT_QTPROPERTYBROWSER_EXPORT
#endif

#ifndef Q_DISABLE_COPY
#define Q_DISABLE_COPY(Class) \
    Class(const Class &) = delete;\
    Class &operator=(const Class &) = delete;
#endif

#ifndef Q_DISABLE_MOVE
#define Q_DISABLE_MOVE(Class) \
    Class(Class &&) = delete; \
    Class &operator=(Class &&) = delete;
#endif

#ifndef Q_DISABLE_COPY_MOVE
#define Q_DISABLE_COPY_MOVE(Class) \
    Q_DISABLE_COPY(Class) \
    Q_DISABLE_MOVE(Class)
#endif

#endif  // SARIBBONGLOBAL_H
