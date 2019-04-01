def t():
    print('In True!')
    return True

def f():
    print ('In False!')
    return False

# Store functions to be called in a list
funcs = [t, t, t]

def test_any():
    # Pass a generator expression with function calls to any
    print( any(func() for func in funcs))

def test_all():
    # Pass a generator expression with function calls to all
    print (all(func() for func in funcs))

test_any() # Calls t() once and stops.
test_all() # Calls t(), then f(), then stops

