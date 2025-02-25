# 42-netpractice

A network can be described as a group of interconnected devices that communicate and exchange information. These connections are established via physical cables (Ethernet) or wireless signals (Wi-Fi).

To facilitate communication between devices, specialized hardware such as hubs, switches, and routers are used.
## Hubs and Switches

Just as real-world addresses help postal services deliver mail, every network device has a unique identifier called a Media Access Control (MAC) address. A MAC address is a 48-bit identifier divided into six blocks of two hexadecimal digits (e.g., `00:B0:D0:63:C2:26`). Hubs and switches use these addresses to direct traffic within a local network.

Both hubs and switches act as communication hubs, but they operate differently. A hub broadcasts incoming data to all connected devices indiscriminately. In contrast, a switch intelligently records MAC addresses and forwards data only to the intended recipient. While this explanation simplifies their roles, it provides a foundational understanding.
## Routers

When connecting separate networks—or linking to the internet—a router is required. With billions of devices online (and growing daily), routers act as intermediaries, much like postal sorting facilities. For example, sending a package internationally involves transferring it through local, regional, and national offices before it reaches its destination country. Similarly, routers use hierarchical addressing to ensure data reaches the correct network.

This hierarchical system relies on Internet Protocol (IP) addresses, analogous to postal codes. IP addresses prevent confusion between identical local addresses in different regions. The most common format, IPv4, consists of four 8-bit blocks (octets), such as 192.168.1.1. IPv4 supports roughly 4.3 billion addresses, a number already exhausted due to internet growth. This limitation led to the development of IPv6, which uses 128-bit addresses written as eight 16-bit hexadecimal blocks (e.g., `2001:0:130F::9C0:876A:130B`).
## Modern Routers

Today’s home "routers" are multifunctional devices that combine routing, switching, and Wi-Fi capabilities. While colloquially called routers, this term understates their complexity. Understanding the distinct roles of hubs, switches, and routers helps clarify how networks operate at different scales.
