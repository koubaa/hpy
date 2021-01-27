
/*
   DO NOT EDIT THIS FILE!

   This file is automatically generated by hpy.tools.autogen.hpyfunc.autogen_hpyfunc_declare_h
   See also hpy.tools.autogen and hpy/tools/public_api.h

   Run this to regenerate:
       make autogen

*/

#define _HPyFunc_DECLARE_HPyFunc_NOARGS(SYM) static HPy SYM(HPyContext ctx, HPy self)
#define _HPyFunc_DECLARE_HPyFunc_O(SYM) static HPy SYM(HPyContext ctx, HPy self, HPy arg)
#define _HPyFunc_DECLARE_HPyFunc_VARARGS(SYM) static HPy SYM(HPyContext ctx, HPy self, HPy *args, HPy_ssize_t nargs)
#define _HPyFunc_DECLARE_HPyFunc_KEYWORDS(SYM) static HPy SYM(HPyContext ctx, HPy self, HPy *args, HPy_ssize_t nargs, HPy kw)
#define _HPyFunc_DECLARE_HPyFunc_UNARYFUNC(SYM) static HPy SYM(HPyContext ctx, HPy)
#define _HPyFunc_DECLARE_HPyFunc_BINARYFUNC(SYM) static HPy SYM(HPyContext ctx, HPy, HPy)
#define _HPyFunc_DECLARE_HPyFunc_TERNARYFUNC(SYM) static HPy SYM(HPyContext ctx, HPy, HPy, HPy)
#define _HPyFunc_DECLARE_HPyFunc_INQUIRY(SYM) static int SYM(HPyContext ctx, HPy)
#define _HPyFunc_DECLARE_HPyFunc_LENFUNC(SYM) static HPy_ssize_t SYM(HPyContext ctx, HPy)
#define _HPyFunc_DECLARE_HPyFunc_SSIZEARGFUNC(SYM) static HPy SYM(HPyContext ctx, HPy, HPy_ssize_t)
#define _HPyFunc_DECLARE_HPyFunc_SSIZESSIZEARGFUNC(SYM) static HPy SYM(HPyContext ctx, HPy, HPy_ssize_t, HPy_ssize_t)
#define _HPyFunc_DECLARE_HPyFunc_SSIZEOBJARGPROC(SYM) static int SYM(HPyContext ctx, HPy, HPy_ssize_t, HPy)
#define _HPyFunc_DECLARE_HPyFunc_SSIZESSIZEOBJARGPROC(SYM) static int SYM(HPyContext ctx, HPy, HPy_ssize_t, HPy_ssize_t, HPy)
#define _HPyFunc_DECLARE_HPyFunc_OBJOBJARGPROC(SYM) static int SYM(HPyContext ctx, HPy, HPy, HPy)
#define _HPyFunc_DECLARE_HPyFunc_FREEFUNC(SYM) static void SYM(HPyContext ctx, void *)
#define _HPyFunc_DECLARE_HPyFunc_GETATTRFUNC(SYM) static HPy SYM(HPyContext ctx, HPy, char *)
#define _HPyFunc_DECLARE_HPyFunc_GETATTROFUNC(SYM) static HPy SYM(HPyContext ctx, HPy, HPy)
#define _HPyFunc_DECLARE_HPyFunc_SETATTRFUNC(SYM) static int SYM(HPyContext ctx, HPy, char *, HPy)
#define _HPyFunc_DECLARE_HPyFunc_SETATTROFUNC(SYM) static int SYM(HPyContext ctx, HPy, HPy, HPy)
#define _HPyFunc_DECLARE_HPyFunc_REPRFUNC(SYM) static HPy SYM(HPyContext ctx, HPy)
#define _HPyFunc_DECLARE_HPyFunc_HASHFUNC(SYM) static HPy_hash_t SYM(HPyContext ctx, HPy)
#define _HPyFunc_DECLARE_HPyFunc_RICHCMPFUNC(SYM) static HPy SYM(HPyContext ctx, HPy, HPy, HPy_RichCmpOp)
#define _HPyFunc_DECLARE_HPyFunc_GETITERFUNC(SYM) static HPy SYM(HPyContext ctx, HPy)
#define _HPyFunc_DECLARE_HPyFunc_ITERNEXTFUNC(SYM) static HPy SYM(HPyContext ctx, HPy)
#define _HPyFunc_DECLARE_HPyFunc_DESCRGETFUNC(SYM) static HPy SYM(HPyContext ctx, HPy, HPy, HPy)
#define _HPyFunc_DECLARE_HPyFunc_DESCRSETFUNC(SYM) static int SYM(HPyContext ctx, HPy, HPy, HPy)
#define _HPyFunc_DECLARE_HPyFunc_INITPROC(SYM) static int SYM(HPyContext ctx, HPy self, HPy *args, HPy_ssize_t nargs, HPy kw)
#define _HPyFunc_DECLARE_HPyFunc_GETTER(SYM) static HPy SYM(HPyContext ctx, HPy, void *)
#define _HPyFunc_DECLARE_HPyFunc_SETTER(SYM) static int SYM(HPyContext ctx, HPy, HPy, void *)
#define _HPyFunc_DECLARE_HPyFunc_OBJOBJPROC(SYM) static int SYM(HPyContext ctx, HPy, HPy)
#define _HPyFunc_DECLARE_HPyFunc_DESTROYFUNC(SYM) static void SYM(void *)

typedef HPy (*HPyFunc_noargs)(HPyContext ctx, HPy self);
typedef HPy (*HPyFunc_o)(HPyContext ctx, HPy self, HPy arg);
typedef HPy (*HPyFunc_varargs)(HPyContext ctx, HPy self, HPy *args, HPy_ssize_t nargs);
typedef HPy (*HPyFunc_keywords)(HPyContext ctx, HPy self, HPy *args, HPy_ssize_t nargs, HPy kw);
typedef HPy (*HPyFunc_unaryfunc)(HPyContext ctx, HPy);
typedef HPy (*HPyFunc_binaryfunc)(HPyContext ctx, HPy, HPy);
typedef HPy (*HPyFunc_ternaryfunc)(HPyContext ctx, HPy, HPy, HPy);
typedef int (*HPyFunc_inquiry)(HPyContext ctx, HPy);
typedef HPy_ssize_t (*HPyFunc_lenfunc)(HPyContext ctx, HPy);
typedef HPy (*HPyFunc_ssizeargfunc)(HPyContext ctx, HPy, HPy_ssize_t);
typedef HPy (*HPyFunc_ssizessizeargfunc)(HPyContext ctx, HPy, HPy_ssize_t, HPy_ssize_t);
typedef int (*HPyFunc_ssizeobjargproc)(HPyContext ctx, HPy, HPy_ssize_t, HPy);
typedef int (*HPyFunc_ssizessizeobjargproc)(HPyContext ctx, HPy, HPy_ssize_t, HPy_ssize_t, HPy);
typedef int (*HPyFunc_objobjargproc)(HPyContext ctx, HPy, HPy, HPy);
typedef void (*HPyFunc_freefunc)(HPyContext ctx, void *);
typedef HPy (*HPyFunc_getattrfunc)(HPyContext ctx, HPy, char *);
typedef HPy (*HPyFunc_getattrofunc)(HPyContext ctx, HPy, HPy);
typedef int (*HPyFunc_setattrfunc)(HPyContext ctx, HPy, char *, HPy);
typedef int (*HPyFunc_setattrofunc)(HPyContext ctx, HPy, HPy, HPy);
typedef HPy (*HPyFunc_reprfunc)(HPyContext ctx, HPy);
typedef HPy_hash_t (*HPyFunc_hashfunc)(HPyContext ctx, HPy);
typedef HPy (*HPyFunc_richcmpfunc)(HPyContext ctx, HPy, HPy, HPy_RichCmpOp);
typedef HPy (*HPyFunc_getiterfunc)(HPyContext ctx, HPy);
typedef HPy (*HPyFunc_iternextfunc)(HPyContext ctx, HPy);
typedef HPy (*HPyFunc_descrgetfunc)(HPyContext ctx, HPy, HPy, HPy);
typedef int (*HPyFunc_descrsetfunc)(HPyContext ctx, HPy, HPy, HPy);
typedef int (*HPyFunc_initproc)(HPyContext ctx, HPy self, HPy *args, HPy_ssize_t nargs, HPy kw);
typedef HPy (*HPyFunc_getter)(HPyContext ctx, HPy, void *);
typedef int (*HPyFunc_setter)(HPyContext ctx, HPy, HPy, void *);
typedef int (*HPyFunc_objobjproc)(HPyContext ctx, HPy, HPy);
typedef void (*HPyFunc_destroyfunc)(void *);
