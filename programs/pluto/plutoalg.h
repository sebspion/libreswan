struct connection;
struct esp_info;

/* status info */
extern void kernel_alg_show_status(const struct fd *whackfd);
extern void kernel_alg_show_connection(const struct fd *whackfd,
				       const struct connection *c,
				       const char *instance);

struct ike_info;
#define IKEALGBUF_LEN strlen("00000_000-00000_000-00000")
