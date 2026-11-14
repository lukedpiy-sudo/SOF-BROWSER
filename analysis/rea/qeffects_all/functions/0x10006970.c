// rea decompile_all
// name: FUN_10006970
// address: 0x10006970
// body: available
// range: 0x10006970-0x1000701a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006970(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  DAT_1002948c = 0;
  DAT_10029490 = 0;
  _DAT_10029494 = 0;
  DAT_10029488 = 0x2900;
  pcVar2 = (char *)(*DAT_1002966c)(0x1f03);
  if (pcVar2 == (char *)0x0) {
    return;
  }
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 == pcVar2 + 1) {
    return;
  }
  pcVar3 = _strstr(pcVar2,"GL_ARB_multitexture");
  if (pcVar3 != (char *)0x0) {
    DAT_10029a38 = (*DAT_10029a00)("glActiveTextureARB");
    if (DAT_10029a38 == 0) {
      pcVar3 = "ERROR: cannot get proc address of \"%s\"!\n";
      (*(code *)PTR_FUN_10028344)
                ("ERROR: cannot get proc address of \"%s\"!\n","glActiveTextureARB");
      FUN_10001c50(pcVar3);
    }
    _DAT_10029a3c = (*DAT_10029a00)("glMultiTexCoord2fARB");
    if (_DAT_10029a3c == 0) {
      pcVar3 = "ERROR: cannot get proc address of \"%s\"!\n";
      (*(code *)PTR_FUN_10028344)
                ("ERROR: cannot get proc address of \"%s\"!\n","glMultiTexCoord2fARB");
      FUN_10001c50(pcVar3);
    }
    _DAT_10029a40 = (*DAT_10029a00)("glMultiTexCoord2fvARB");
    if (_DAT_10029a40 == 0) {
      pcVar3 = "ERROR: cannot get proc address of \"%s\"!\n";
      (*(code *)PTR_FUN_10028344)
                ("ERROR: cannot get proc address of \"%s\"!\n","glMultiTexCoord2fvARB");
      FUN_10001c50(pcVar3);
    }
    (*DAT_10029638)(0x84e2,&DAT_1002948c);
    if (1 < DAT_1002948c) {
      _DAT_10029494 = _DAT_10029494 | 1;
      (*(code *)PTR_FUN_10028344)();
      FUN_10001bf0("Using extension: GL_ARB_multitexture (%i TMU)\n");
    }
  }
  pcVar3 = _strstr(pcVar2,"GL_ARB_texture_rectangle");
  if (pcVar3 == (char *)0x0) {
    pcVar3 = _strstr(pcVar2,"GL_NV_texture_rectangle");
    if (pcVar3 != (char *)0x0) {
      pcVar3 = "Using extension: GL_NV_texture_rectangle\n";
      goto LAB_10006ae8;
    }
    pcVar3 = _strstr(pcVar2,"GL_EXT_texture_rectangle");
    if (pcVar3 != (char *)0x0) {
      pcVar3 = "Using extension: GL_EXT_texture_rectangle\n";
      goto LAB_10006ae8;
    }
  }
  else {
    pcVar3 = "Using extension: GL_ARB_texture_rectangle\n";
LAB_10006ae8:
    _DAT_10029494 = _DAT_10029494 | 8;
    (*(code *)PTR_FUN_10028344)();
    FUN_10001bf0(pcVar3);
  }
  pcVar3 = _strstr(pcVar2,"GL_ARB_depth_texture");
  if (pcVar3 == (char *)0x0) {
    pcVar3 = _strstr(pcVar2,"GL_SGIS_depth_texture");
    if (pcVar3 != (char *)0x0) {
      pcVar3 = "Using extension: GL_SGIS_depth_texture\n";
      goto LAB_10006b2f;
    }
  }
  else {
    pcVar3 = "Using extension: GL_ARB_depth_texture\n";
LAB_10006b2f:
    _DAT_10029494 = _DAT_10029494 | 0x10;
    (*(code *)PTR_FUN_10028344)();
    FUN_10001bf0(pcVar3);
  }
  pcVar3 = _strstr(pcVar2,"GL_EXT_texture_edge_clamp");
  if (pcVar3 != (char *)0x0) {
    pcVar3 = "Using extension: GL_EXT_texture_edge_clamp\n";
    DAT_10029488 = 0x812f;
    (*(code *)PTR_FUN_10028344)();
    FUN_10001bf0(pcVar3);
  }
  pcVar3 = _strstr(pcVar2,"GL_EXT_texture_filter_anisotropic");
  if (pcVar3 != (char *)0x0) {
    (*DAT_10029638)(0x84ff,&DAT_10029490);
    (*(code *)PTR_FUN_10028344)();
    FUN_10001bf0("Using extension: GL_EXT_texture_filter_anisotropic (max %i)\n");
  }
  pcVar3 = _strstr(pcVar2,"GL_NV_multisample_filter_hint");
  if (pcVar3 != (char *)0x0) {
    _DAT_10029494 = _DAT_10029494 | 0x40;
    pcVar3 = "Using extension: GL_NV_multisample_filter_hint\n";
    (*(code *)PTR_FUN_10028344)();
    FUN_10001bf0(pcVar3);
  }
  pcVar3 = _strstr(pcVar2,"GL_ARB_framebuffer_object");
  if (pcVar3 == (char *)0x0) {
    pcVar3 = _strstr(pcVar2,"GL_EXT_framebuffer_object");
    if (pcVar3 == (char *)0x0) goto LAB_10006c2a;
    pcVar3 = "Using extension: GL_EXT_framebuffer_object\n";
  }
  else {
    pcVar3 = "Using extension: GL_ARB_framebuffer_object\n";
  }
  _DAT_10029494 = _DAT_10029494 | 0x20;
  (*(code *)PTR_FUN_10028344)();
  FUN_10001bf0(pcVar3);
LAB_10006c2a:
  pcVar3 = _strstr(pcVar2,"GL_ARB_shader_objects");
  if ((pcVar3 != (char *)0x0) &&
     (pcVar3 = _strstr(pcVar2,"GL_ARB_shading_language_100"), pcVar3 != (char *)0x0)) {
    DAT_10029a34 = (*DAT_10029a00)("glGetHandleARB");
    if (DAT_10029a34 == 0) {
      pcVar3 = "ERROR: cannot get proc address of \"%s\"!\n";
      (*(code *)PTR_FUN_10028344)("ERROR: cannot get proc address of \"%s\"!\n","glGetHandleARB");
      FUN_10001c50(pcVar3);
    }
    DAT_10029a44 = (*DAT_10029a00)("glDeleteObjectARB");
    if (DAT_10029a44 == 0) {
      pcVar3 = "ERROR: cannot get proc address of \"%s\"!\n";
      (*(code *)PTR_FUN_10028344)("ERROR: cannot get proc address of \"%s\"!\n","glDeleteObjectARB")
      ;
      FUN_10001c50(pcVar3);
    }
    DAT_10029a48 = (*DAT_10029a00)("glDetachObjectARB");
    if (DAT_10029a48 == 0) {
      pcVar3 = "ERROR: cannot get proc address of \"%s\"!\n";
      (*(code *)PTR_FUN_10028344)("ERROR: cannot get proc address of \"%s\"!\n","glDetachObjectARB")
      ;
      FUN_10001c50(pcVar3);
    }
    DAT_10029a4c = (*DAT_10029a00)("glCreateShaderObjectARB");
    if (DAT_10029a4c == 0) {
      pcVar3 = "ERROR: cannot get proc address of \"%s\"!\n";
      (*(code *)PTR_FUN_10028344)
                ("ERROR: cannot get proc address of \"%s\"!\n","glCreateShaderObjectARB");
      FUN_10001c50(pcVar3);
    }
    DAT_10029a50 = (*DAT_10029a00)("glShaderSourceARB");
    if (DAT_10029a50 == 0) {
      pcVar3 = "ERROR: cannot get proc address of \"%s\"!\n";
      (*(code *)PTR_FUN_10028344)("ERROR: cannot get proc address of \"%s\"!\n","glShaderSourceARB")
      ;
      FUN_10001c50(pcVar3);
    }
    DAT_10029a54 = (*DAT_10029a00)("glCompileShaderARB");
    if (DAT_10029a54 == 0) {
      pcVar3 = "ERROR: cannot get proc address of \"%s\"!\n";
      (*(code *)PTR_FUN_10028344)
                ("ERROR: cannot get proc address of \"%s\"!\n","glCompileShaderARB");
      FUN_10001c50(pcVar3);
    }
    DAT_10029a58 = (*DAT_10029a00)("glCreateProgramObjectARB");
    if (DAT_10029a58 == 0) {
      pcVar3 = "ERROR: cannot get proc address of \"%s\"!\n";
      (*(code *)PTR_FUN_10028344)
                ("ERROR: cannot get proc address of \"%s\"!\n","glCreateProgramObjectARB");
      FUN_10001c50(pcVar3);
    }
    DAT_10029a5c = (*DAT_10029a00)("glAttachObjectARB");
    if (DAT_10029a5c == 0) {
      pcVar3 = "ERROR: cannot get proc address of \"%s\"!\n";
      (*(code *)PTR_FUN_10028344)("ERROR: cannot get proc address of \"%s\"!\n","glAttachObjectARB")
      ;
      FUN_10001c50(pcVar3);
    }
    DAT_10029a60 = (*DAT_10029a00)("glLinkProgramARB");
    if (DAT_10029a60 == 0) {
      pcVar3 = "ERROR: cannot get proc address of \"%s\"!\n";
      (*(code *)PTR_FUN_10028344)("ERROR: cannot get proc address of \"%s\"!\n","glLinkProgramARB");
      FUN_10001c50(pcVar3);
    }
    DAT_10029a64 = (*DAT_10029a00)("glUseProgramObjectARB");
    if (DAT_10029a64 == 0) {
      pcVar3 = "ERROR: cannot get proc address of \"%s\"!\n";
      (*(code *)PTR_FUN_10028344)
                ("ERROR: cannot get proc address of \"%s\"!\n","glUseProgramObjectARB");
      FUN_10001c50(pcVar3);
    }
    DAT_10029a68 = (*DAT_10029a00)("glValidateProgramARB");
    if (DAT_10029a68 == 0) {
      pcVar3 = "ERROR: cannot get proc address of \"%s\"!\n";
      (*(code *)PTR_FUN_10028344)
                ("ERROR: cannot get proc address of \"%s\"!\n","glValidateProgramARB");
      FUN_10001c50(pcVar3);
    }
    DAT_10029a6c = (*DAT_10029a00)("glGetUniformLocationARB");
    if (DAT_10029a6c == 0) {
      pcVar3 = "ERROR: cannot get proc address of \"%s\"!\n";
      (*(code *)PTR_FUN_10028344)
                ("ERROR: cannot get proc address of \"%s\"!\n","glGetUniformLocationARB");
      FUN_10001c50(pcVar3);
    }
    DAT_10029a74 = (*DAT_10029a00)("glUniform4fARB");
    if (DAT_10029a74 == 0) {
      pcVar3 = "ERROR: cannot get proc address of \"%s\"!\n";
      (*(code *)PTR_FUN_10028344)("ERROR: cannot get proc address of \"%s\"!\n","glUniform4fARB");
      FUN_10001c50(pcVar3);
    }
    _DAT_10029a78 = (*DAT_10029a00)("glUniform4fvARB");
    if (_DAT_10029a78 == 0) {
      pcVar3 = "ERROR: cannot get proc address of \"%s\"!\n";
      (*(code *)PTR_FUN_10028344)("ERROR: cannot get proc address of \"%s\"!\n","glUniform4fvARB");
      FUN_10001c50(pcVar3);
    }
    DAT_10029a70 = (*DAT_10029a00)("glUniform1iARB");
    if (DAT_10029a70 == 0) {
      pcVar3 = "ERROR: cannot get proc address of \"%s\"!\n";
      (*(code *)PTR_FUN_10028344)("ERROR: cannot get proc address of \"%s\"!\n","glUniform1iARB");
      FUN_10001c50(pcVar3);
    }
    DAT_10029a7c = (*DAT_10029a00)("glGetInfoLogARB");
    if (DAT_10029a7c == 0) {
      pcVar3 = "ERROR: cannot get proc address of \"%s\"!\n";
      (*(code *)PTR_FUN_10028344)("ERROR: cannot get proc address of \"%s\"!\n","glGetInfoLogARB");
      FUN_10001c50(pcVar3);
    }
    DAT_10029a80 = (*DAT_10029a00)("glGetObjectParameterivARB");
    if (DAT_10029a80 == 0) {
      pcVar3 = "ERROR: cannot get proc address of \"%s\"!\n";
      (*(code *)PTR_FUN_10028344)
                ("ERROR: cannot get proc address of \"%s\"!\n","glGetObjectParameterivARB");
      FUN_10001c50(pcVar3);
    }
    _DAT_10029a84 = (*DAT_10029a00)("glGetAttachedObjectsARB");
    if (_DAT_10029a84 == 0) {
      pcVar3 = "ERROR: cannot get proc address of \"%s\"!\n";
      (*(code *)PTR_FUN_10028344)
                ("ERROR: cannot get proc address of \"%s\"!\n","glGetAttachedObjectsARB");
      FUN_10001c50(pcVar3);
    }
    pcVar3 = "Using extension: GL_ARB_shader_objects\n";
    (*(code *)PTR_FUN_10028344)();
    FUN_10001bf0(pcVar3);
    pcVar3 = "Using extension: GL_ARB_shading_language_100\n";
    (*(code *)PTR_FUN_10028344)();
    FUN_10001bf0(pcVar3);
    pcVar3 = _strstr(pcVar2,"GL_ARB_vertex_shader");
    if (pcVar3 != (char *)0x0) {
      pcVar3 = "Using extension: GL_ARB_vertex_shader\n";
      (*(code *)PTR_FUN_10028344)();
      FUN_10001bf0(pcVar3);
      _DAT_10029494 = _DAT_10029494 | 2;
    }
    pcVar2 = _strstr(pcVar2,"GL_ARB_fragment_shader");
    if (pcVar2 != (char *)0x0) {
      pcVar2 = "Using extension: GL_ARB_fragment_shader\n";
      (*(code *)PTR_FUN_10028344)();
      FUN_10001bf0(pcVar2);
      _DAT_10029494 = _DAT_10029494 | 4;
    }
  }
  return;
}

