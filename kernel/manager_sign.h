#ifndef MANAGER_SIGN_H
#define MANAGER_SIGN_H

// ShirkNeko/SukiSU
#define EXPECTED_SIZE_NEXTGENSU 0x39f
#define EXPECTED_HASH_NEXTGENSU                                                \
    "f4e774f704af6e958158835da8b8ffffc7aa7a977093828280f6926617ae469a"

typedef struct {
    u32 size;
    const char *sha256;
} apk_sign_key_t;

#endif /* MANAGER_SIGN_H */
