#ifndef Ta3_AST_H
#define Ta3_AST_H
#ifdef __cplusplus
extern "C" {
#endif

extern int Ta3AST_Validate(mod_ty);
extern mod_ty Ta3AST_FromNode(
    const node *n,
    PyCompilerFlags *flags,
    const char *filename,       /* decoded from the filesystem encoding */
    int feature_version,
    PyArena *arena);
extern mod_ty Ta3AST_FromNodeObject(
    const node *n,
    PyCompilerFlags *flags,
    PyObject *filename,
    int feature_version,
    PyArena *arena);

#ifdef __cplusplus
}
#endif
#endif /* !Ta3_AST_H */
