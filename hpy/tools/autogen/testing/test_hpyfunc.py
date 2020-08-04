from hpy.tools.autogen.hpyfunc import autogen_hpyfunc_declare_h
from hpy.tools.autogen.testing.test_autogen import BaseTestAutogen, src_equal

class TestHPyFunc(BaseTestAutogen):

    def test_parse(self):
        api = self.parse("""
            typedef int HPyFunc_Signature;
            typedef HPy (*HPyFunc_noargs)(HPyContext ctx, HPy self);
        """)
        assert len(api.hpyfunc_typedefs) == 1
        hpyfunc = api.get_hpyfunc_typedef('HPyFunc_noargs')
        assert hpyfunc.name == 'HPyFunc_noargs'
        assert hpyfunc.base_name() == 'noargs'

    def test_autogen_hpyfunc_declare_h(self):
        api = self.parse("""
            typedef HPy (*HPyFunc_noargs)(HPyContext ctx, HPy self);
        """)
        got = autogen_hpyfunc_declare_h(api).generate()
        exp = """
            #define _HPyFunc_DECLARE_HPyFunc_NOARGS(SYM) static HPy SYM(HPyContext ctx, HPy self)
        """
        assert src_equal(got, exp)