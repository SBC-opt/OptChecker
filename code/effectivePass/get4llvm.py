import requests

def compile_with_gcc_o3(code):
    url = 'https://godbolt.org/api/compiler/gcc'
    headers = {'Content-Type': 'application/json'}
    data = {
        "source": code,
        "options": "-O3",
        "filters": {
            "binary": False,
            "commentOnly": False,
            "directives": False,
            "trim": True
        }
    }

    response = requests.post(url, json=data, headers=headers)
    if response.status_code == 200:
        result = response.json()
        asm = result['asm']
        return asm
    else:
        print(f"Error fetching compilation results: {response.status_code}")
        return None

# Example usage:
if __name__ == "__main__":
    code = '''
    #include <iostream>
    
    int main() {
        int x = 42;
        std::cout << "Hello, World! " << x << std::endl;
        return 0;
    }
    '''

    asm_result = compile_with_gcc_o3(code)
    if asm_result:
        print("GCC -O3 Assembly Output:")
        print(asm_result)
