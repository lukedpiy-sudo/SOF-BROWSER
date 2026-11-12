// rea decompile_all
// name: FUN_20094030
// address: 0x20094030
// body: available
// range: 0x20094030-0x200943f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20094030(void)

{
  int in_ECX;
  
  *(undefined1 *)
   (*(int *)(in_ECX + 0x11c) * 0x40 + *(int *)(in_ECX + 0x118) + *(int *)(in_ECX + 0xb0)) = 0xff;
  *(undefined1 *)
   (*(int *)(in_ECX + 0x124) * 0x40 + *(int *)(in_ECX + 0x120) + *(int *)(in_ECX + 0xb0)) = 0xff;
  *(undefined1 *)
   (*(int *)(in_ECX + 300) * 0x40 + *(int *)(in_ECX + 0x128) + *(int *)(in_ECX + 0xb0)) = 0xff;
  *(undefined1 *)
   ((*(int *)(in_ECX + 0x128) + *(int *)(in_ECX + 0x120) + *(int *)(in_ECX + 0x118)) / 3 +
    ((*(int *)(in_ECX + 300) + *(int *)(in_ECX + 0x124) + *(int *)(in_ECX + 0x11c)) / 3) * 0x40 +
   *(int *)(in_ECX + 0xb0)) = 0xff;
  *(undefined1 *)
   ((*(int *)(in_ECX + 300) + *(int *)(in_ECX + 0x11c) * 2 + *(int *)(in_ECX + 0x124) >> 2) * 0x40 +
    (*(int *)(in_ECX + 0x128) + *(int *)(in_ECX + 0x118) * 2 + *(int *)(in_ECX + 0x120) >> 2) +
   *(int *)(in_ECX + 0xb0)) = 0xff;
  *(undefined1 *)
   ((*(int *)(in_ECX + 300) + *(int *)(in_ECX + 0x124) * 2 + *(int *)(in_ECX + 0x11c) >> 2) * 0x40 +
    (*(int *)(in_ECX + 0x128) + *(int *)(in_ECX + 0x120) * 2 + *(int *)(in_ECX + 0x118) >> 2) +
   *(int *)(in_ECX + 0xb0)) = 0xff;
  *(undefined1 *)
   ((*(int *)(in_ECX + 0x124) + *(int *)(in_ECX + 300) * 2 + *(int *)(in_ECX + 0x11c) >> 2) * 0x40 +
    (*(int *)(in_ECX + 0x120) + *(int *)(in_ECX + 0x128) * 2 + *(int *)(in_ECX + 0x118) >> 2) +
   *(int *)(in_ECX + 0xb0)) = 0xff;
  *(undefined1 *)
   ((*(int *)(in_ECX + 300) + *(int *)(in_ECX + 0x124) >> 1) * 0x40 +
    (*(int *)(in_ECX + 0x128) + *(int *)(in_ECX + 0x120) >> 1) + *(int *)(in_ECX + 0xb0)) = 0xff;
  *(undefined1 *)
   ((*(int *)(in_ECX + 300) + *(int *)(in_ECX + 0x11c) >> 1) * 0x40 +
    (*(int *)(in_ECX + 0x128) + *(int *)(in_ECX + 0x118) >> 1) + *(int *)(in_ECX + 0xb0)) = 0xff;
  *(undefined1 *)
   ((*(int *)(in_ECX + 0x124) + *(int *)(in_ECX + 0x11c) >> 1) * 0x40 +
    (*(int *)(in_ECX + 0x120) + *(int *)(in_ECX + 0x118) >> 1) + *(int *)(in_ECX + 0xb0)) = 0xff;
  if (DAT_20404c8d != '\0') {
    *(undefined1 *)
     ((*(int *)(in_ECX + 0x120) * 3 + *(int *)(in_ECX + 0x128) * 4 + *(int *)(in_ECX + 0x118) >> 8)
      + (*(int *)(in_ECX + 0x120) + (*(int *)(in_ECX + 0x124) + *(int *)(in_ECX + 300) * 2) * 2 +
         *(int *)(in_ECX + 0x11c) >> 8) * 0x40 + *(int *)(in_ECX + 0xb0)) = 0xff;
    *(undefined1 *)
     ((*(int *)(in_ECX + 0x128) * 3 + *(int *)(in_ECX + 0x120) * 4 + *(int *)(in_ECX + 0x118) >> 8)
      + (*(int *)(in_ECX + 0x128) + (*(int *)(in_ECX + 300) + *(int *)(in_ECX + 0x124) * 2) * 2 +
         *(int *)(in_ECX + 0x11c) >> 8) * 0x40 + *(int *)(in_ECX + 0xb0)) = 0xff;
    *(undefined1 *)
     ((*(int *)(in_ECX + 0x118) * 3 + *(int *)(in_ECX + 0x128) * 4 + *(int *)(in_ECX + 0x120) >> 8)
      + (*(int *)(in_ECX + 0x118) + (*(int *)(in_ECX + 0x11c) + *(int *)(in_ECX + 300) * 2) * 2 +
         *(int *)(in_ECX + 0x124) >> 8) * 0x40 + *(int *)(in_ECX + 0xb0)) = 0xff;
    *(undefined1 *)
     ((*(int *)(in_ECX + 0x118) * 5 + *(int *)(in_ECX + 0x128) * 2 + *(int *)(in_ECX + 0x120) >> 8)
      + (*(int *)(in_ECX + 0x118) + (*(int *)(in_ECX + 300) + *(int *)(in_ECX + 0x11c) * 2) * 2 +
         *(int *)(in_ECX + 0x124) >> 8) * 0x40 + *(int *)(in_ECX + 0xb0)) = 0xff;
    *(undefined1 *)
     ((*(int *)(in_ECX + 0x120) * 3 + *(int *)(in_ECX + 0x118) * 4 + *(int *)(in_ECX + 0x128) >> 8)
      + (*(int *)(in_ECX + 300) + (*(int *)(in_ECX + 0x124) + *(int *)(in_ECX + 0x11c) * 2) * 2 +
         *(int *)(in_ECX + 0x120) >> 8) * 0x40 + *(int *)(in_ECX + 0xb0)) = 0xff;
    *(undefined1 *)
     ((*(int *)(in_ECX + 0x118) * 3 + *(int *)(in_ECX + 0x120) * 4 + *(int *)(in_ECX + 0x128) >> 8)
      + (*(int *)(in_ECX + 300) + (*(int *)(in_ECX + 0x11c) + *(int *)(in_ECX + 0x124) * 2) * 2 +
         *(int *)(in_ECX + 0x118) >> 8) * 0x40 + *(int *)(in_ECX + 0xb0)) = 0xff;
  }
  return;
}

