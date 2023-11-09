class Solution:
    def isValid(self, _string: str) -> bool:
        maps: dict[str, str] = {
                "(": ")",
                "[": "]",
                "{": "}",
            }

        _map_hash: list[str] = []
        open_char: list[str] = ["{", "(", "["]
        close_char: list[str] = ["}", ")", "]"]
        for x in _string:
            if x in open_char:
                _map_hash.append(x)
            elif x in close_char:
                if not _map_hash or maps[_map_hash[-1]] != x:
                    return False
                else:
                    _map_hash.pop()

        return not _map_hash
