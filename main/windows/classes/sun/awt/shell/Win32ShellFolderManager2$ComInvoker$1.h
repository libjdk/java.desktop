#ifndef _sun_awt_shell_Win32ShellFolderManager2$ComInvoker$1_h_
#define _sun_awt_shell_Win32ShellFolderManager2$ComInvoker$1_h_
//$ class sun.awt.shell.Win32ShellFolderManager2$ComInvoker$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace shell {
			class Win32ShellFolderManager2$ComInvoker;
		}
	}
}

namespace sun {
	namespace awt {
		namespace shell {

class $export Win32ShellFolderManager2$ComInvoker$1 : public ::java::lang::Runnable {
	$class(Win32ShellFolderManager2$ComInvoker$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Win32ShellFolderManager2$ComInvoker$1();
	void init$(::sun::awt::shell::Win32ShellFolderManager2$ComInvoker* this$0, ::java::lang::Runnable* val$task);
	virtual void run() override;
	::sun::awt::shell::Win32ShellFolderManager2$ComInvoker* this$0 = nullptr;
	::java::lang::Runnable* val$task = nullptr;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_Win32ShellFolderManager2$ComInvoker$1_h_