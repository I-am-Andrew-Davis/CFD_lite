#ifndef SPACE_H_
#define SPACE_H_

#undef SPACEDIM
#define SPACEDIM 3

#undef D_EXPR
#undef D_DECL
#undef D_TERM

#if SPACEDIM==1

#define D_EXPR(a,b,c) ((void)((a),0))
#define D_DECL(a,b,c) a
#define D_TERM(a,b,c) a

#elif SPACEDIM==2

#define D_EXPR(a,b,c) ((void)((a),(b),0))
#define D_DECL(a,b,c) a,b
#define D_TERM(a,b,c) a b

#elif SPACEDIM==3

#define D_EXPR(a,b,c) ((void)((a),(b),(c),0))
#define D_DECL(a,b,c) a,b,c
#define D_TERM(a,b,c) a b c

#endif //SPACEDIM =

#endif // SPACE_H_
